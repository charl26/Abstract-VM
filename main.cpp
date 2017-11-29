#include <iostream>
#include <fstream>
#include <regex>
#include <map>
#include "OperandFactory.hpp"
#include "VmStack.hpp"
#include "VMExceptions.hpp"

std::regex patten("(push int[8|16|32]{1,}\\(-?\\d{1,}\\)|"
		                  "assert int[8|16|32]{1,}\\(-?\\d{1,}\\)|"
		                  "push float\\(-?\\d{1,}.\\d{1,}\\)|"
		                  "push double\\(-?\\d{1,}.\\d{1,}\\)|"
		                  "assert double\\(-?\\d{1,}.\\d{1,}\\)|"
		                  "assert float\\(\\d{1,}.\\d{1,}\\)|"
		                  "add|sub|mul|div|mod|print|exit|pop|dump|;;)");
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
	if ((!(std::regex_match(input, patten)) != (input.find(';') != std::string::npos))) {
		tokens.emplace_back("ERROR");
	}
	if (input.find(";)") != std::string::npos)
		tokens.emplace_back("ERROR");
	std::replace(input.begin(), input.end(), '(', ' ');
	std::replace(input.begin(), input.end(), ')', ' ');
	std::istringstream stream(input);
	while (std::getline(stream, temp, ' ')) {
		tokens.push_back(temp);
	}
	dataList data = dataList();
	if (!tokens[0].empty())
		if (tokens[0] != ";" && tokens[0][0] != ';')
			data.command = tokens[0];
	if (!tokens[1].empty() && tokens.size() > 1)
		if (tokens[1] != ";")
			data.type = tokens[1];
	if (!tokens[2].empty() && tokens.size() > 2)
		if (tokens[2] != ";")
			data.value = tokens[2];
	if (data.command.empty())
		return;
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
	std::string error;
	int lineNumber = 1;
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
		else if (obj.command == "ERROR") {
			error = "ERROR: Syntax error: on line -> " + std::to_string(lineNumber);
			throw VMExceptions(error.c_str());
		} else {
			error = "ERROR: " + obj.command + " Command not found.";
			throw VMExceptions(error.c_str());
		}
		lineNumber++;
	}
	throw VMExceptions("ERROR: There is no Exit command.");
}

void readData(std::istream &input) {
	std::string readData;
	while (!input.eof()) {
		std::getline(input, readData, '\n');
		if (readData.find(";;") == std::string::npos) {
			if (!readData.empty())
				storeInput(readData);
		} else {
			processCommands();
		}
	}
	if (commandList.empty() && readData.empty()) {
		throw VMExceptions("ERROR: file is empty.");
	} else if (commandList.empty()) {
		throw VMExceptions("ERROR: There is no commands.");
	}
	if ((readData.find(";;") == std::string::npos) && (commandList.back().command == "exit"))
		processCommands();
	std::cout << "ERROR: There is no exit command" << std::endl;
}

int main(int argc, char **argv) {
	if (!stack)
		stack = new VmStack();
	try {
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
	}
	catch (VMExceptions &exceptions) {
		exceptions.what();
	}
	return (0);
}
