#include <iostream>
#include <fstream>
#include <regex>
#include "operand/OperandFactory.hpp"
#include "VmStack.hpp"

VmStack *stack = new VmStack();

void processNonValueCommand(const std::string &command) {
	if (command == "add") {

	} else if (command == "sub") {

	} else if (command == "mul") {

	} else if (command == "div") {

	} else if (command == "mod") {

	} else if (command == "print") {

	} else if (command == "exit") {

	} else if (command == "pop") {

	} else if (command == "dump") {

	} else if (command == ";;") {

	} else {
		return;
	}
}

void processValueCommand(const std::string &command) {
	OperandFactory operandFactory;
	std::string cleanString = std::regex_replace(command, std::regex("([a-z] {0,}|8|16|32|\\(|\\))"), "");
	if (std::strncmp(command.c_str(), "push int8", 9) == 0) {
		stack->push(const_cast<IOperand *>(operandFactory.createOperand(INT8, cleanString)));
	}
	if (std::strncmp(command.c_str(), "push int16", 10) == 0) {
		stack->push(const_cast<IOperand *>(operandFactory.createOperand(INT16, cleanString)));
	}
	if (std::strncmp(command.c_str(), "push int32", 10) == 0) {
		stack->push(const_cast<IOperand *>(operandFactory.createOperand(INT32, cleanString)));
	}
	if (std::strncmp(command.c_str(), "push float", 10) == 0) {
		stack->push(const_cast<IOperand *>(operandFactory.createOperand(FLOAT, cleanString)));
	}
	if (std::strncmp(command.c_str(), "push double", 11) == 0) {
		stack->push(const_cast<IOperand *>(operandFactory.createOperand(DOUBLE, cleanString)));
	}
	std::cout << "the value is ->" << cleanString << " and the type is ->" << stack->getStack().at(stack->getStack().size() - 1)->getType() << std::endl;

}

void runCommand(const std::string &command) {
	try {
		if (std::regex_match(command, std::regex("(push int[8|16|32]{1,}\\(-?\\d{1,}\\)|push float\\(-?\\d{1,}.\\d{1,}\\)|push double\\(-?\\d{1,}.\\d{1,}\\)))"))) { // NOLINT
			processValueCommand(command);
		} else if (std::regex_match(command, std::regex("(assert int[8|16|32]{1,}\\(-?\\d{1,}\\)|assert double\\(-?\\d{1,}.\\d{1,}\\)|assert float\\(\\d{1,}.\\d{1,}\\))"))) { // NOLINT

		} else if (std::regex_match(command, std::regex("(add|sub|mul|div|mod|print|exit|pop|dump|;;)"))) {
			processNonValueCommand(command);
		} else {
			return;
		}
	}
	catch (std::__1::regex_error &error) {
		std::cout << "ERROR : " << error.what() << std::endl;
	}
}

void ValidateInput(const std::string &inputLine) {
	std::regex patten("(push int[8|16|32]{1,}\\(-?\\d{1,}\\)|"
			                  "assert int[8|16|32]{1,}\\(-?\\d{1,}\\)|"
			                  "push float\\(-?\\d{1,}.\\d{1,}\\)|"
			                  "push double\\(-?\\d{1,}.\\d{1,}\\)|"
			                  "assert double\\(-?\\d{1,}.\\d{1,}\\)|"
			                  "assert float\\(\\d{1,}.\\d{1,}\\)|"
			                  "add|sub|mul|div|mod|print|exit|pop|dump|;;|;)"); // NOLINT
	if (std::regex_match(inputLine, patten)) {
		runCommand(inputLine);
	} else {
		std::cout << "Error Invalid Syntax" << std::endl;
	}
}

void readData(std::istream &input) {
	std::string readData;

	while (!input.eof()) {
		if (readData.find(";;") == std::string::npos) {
			std::getline(input, readData, '\n');
			ValidateInput(readData);
		} else {
			break;
		}
		std::getline(input, readData, '\n');
		ValidateInput(readData);
	}
}

int main(int argc, char **argv) {
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
