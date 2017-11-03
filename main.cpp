#include <iostream>
#include <fstream>

void ValidateInput(std::string inputLine) {

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
