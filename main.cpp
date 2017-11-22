#include <iostream>
#include <fstream>
#include <regex>
#include <map>
#include "OperandFactory.hpp"
#include "VmStack.hpp"

struct  dataList{
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
		std::cout << temp << std::endl;
		tokens.push_back(temp);
	}
	dataList data;
	data.command = tokens[0];
	data.type = tokens[1];
	data.value = tokens[2];
	commandList.emplace_back(data);
}

void processCommands() {
	for (auto &obj : commandList) {
		std::cout << "This is the command ->" << obj.command << std::endl;
		std::cout << "This is the type ->" << obj.type << std::endl;
		std::cout << "This is the value ->" << obj.command << std::endl;
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
		std::getline(input, readData, '\n');
		storeInput(readData);
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
