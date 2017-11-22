#include <iostream>
#include <fstream>
#include <regex>
#include <map>
#include "OperandFactory.hpp"
#include "VmStack.hpp"

struct dataList {
	std::string command;
	std::string type;
	std::string value;
};

VmStack *stack;
std::vector<dataList> commandList;

void storeInput(std::string &input) {
	std::vector<std::string> tokens;
	std::string temp;
	std::replace(input.begin(), input.end(), '(', ' ');
	std::replace(input.begin(), input.end(), ')', ' ');
	std::istringstream stream(input);
	while (std::getline(stream, temp, ' ')) {
		//	std::cout << temp << std::endl;
		tokens.push_back(temp);
	}
	dataList data;
	data.command = tokens[0];
	if (!tokens[1].empty())
		data.type = tokens[1];
	if (!tokens[2].empty())
		data.value = tokens[2];
	commandList.emplace_back(data);
}

eOperandType getType(const dataList &obj) {
	eOperandType type = DOUBLE;
	if (obj.type == "int8")
		type = INT8;
	if (obj.type == "int16")
		type = INT16;
	if (obj.type == "int32")
		type = INT32;
	if (obj.type == "float")
		type = FLOAT;
	return type;
}

void processCommands() {
	OperandFactory operandFactory;
	for (auto &obj : commandList) {
		if (obj.command == "push") {
			eOperandType type = getType(obj);
			stack->push(const_cast<IOperand *>(operandFactory.createOperand(type, obj.value)));
		} else if (obj.command == "assert") {
			eOperandType type = getType(obj);
			stack->assert(type, obj.value);
		} else if (obj.command == "dump")
			stack->dump();
		else if (obj.command == "pop")
			stack->pop();
		else if (obj.command == "add")
			stack->add();
		else if (obj.command == "sub")
			stack->sub();
		else if (obj.command == "mul")
			stack->mul();
		else if (obj.command == "div")
			stack->div();
		else if (obj.command == "mod")
			stack->mod();
		else if (obj.command == "mod")
			stack->mod();
		else if (obj.command == "print")
			stack->print();
		else if (obj.command == "exit")
			stack->exit();
		else if (obj.command == ";;")
			stack->exit();
		else {
			std::cout << "ERROR: " << obj.command << " Command not found." << std::endl;
			_Exit(EXIT_FAILURE);
		}
	}
	for (auto &obj : stack->getStack()) {
		std::cout << obj << std::endl;
	}
}


void readData(std::istream &input) {
	std::string readData;
	while (!input.eof()) {
		if (readData.find(";;") == std::string::npos) {
			std::getline(input, readData, '\n');
			storeInput(readData);
		} else {
			processCommands();
		}
		//	std::getline(input, readData, '\n');
		//storeInput(readData);
	}
}

int main(int argc, char **argv) {
	if (!stack)
		stack = new VmStack();
	switch (argc) {
		case 1: {
			std::cout << "Enter input line by line" << std::endl;
			readData(std::cin);
			break;
		}
		case 2: {
			std::ifstream
					inFile(argv[1]);
			if (inFile) {
				readData(inFile);
			} else {
				std::cout << "Unable to open file: { " << argv[1] << " }" << std::endl;
			}
			break;
		}
		default: {
			std::cout << "ERROR: Incorrect Amount of argument either"
					" input form a file or run without args and input "
					"commands line by line via stdin" << std::endl;
		}
	}
	return (0);
}
