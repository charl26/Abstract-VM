//
// Created by Charl THERON on 2017/11/21.
//

#include "OperandFactory.hpp"
#include "Operand.hpp"

IOperand const *OperandFactory::createOperand(eOperandType type, std::string const &value) const {
	try {
		switch (type) {
			case INT8: {
				return createInt8(value);
			}
			case INT16: {
				return createInt16(value);
			}
			case INT32: {
				return createInt32(value);
			}
			case FLOAT: {
				return createFloat(value);
			}
			case DOUBLE: {
				return createDouble(value);
			}
			default:
				return nullptr;
		}
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
		_Exit(EXIT_FAILURE);
	}
}

IOperand const *OperandFactory::createInt8(std::string const &value) const {
	std::string stringValue;
	std::stringstream ss;
	ss << value;
	double long testValue;
	stringValue = value;
	ss >> testValue;
	if (testValue > INT8_MAX) {
		std::cout << "ERROR: The Value has overflown an int8" << std::endl;
		_Exit(EXIT_FAILURE);
	}
	if (testValue < INT8_MIN){
		std::cout << "ERROR: The Value has under flown an int8" << std::endl;
	}
	return new Operand(value, INT8);
}

IOperand const *OperandFactory::createInt16(std::string const &value) const {
	std::string stringValue;
	std::stringstream ss;
	ss << value;
	double long testValue;
	stringValue = value;
	ss >> testValue;
	if (testValue > INT16_MAX) {
		std::cout << "ERROR: The Value has overflown an int16" << std::endl;
		_Exit(EXIT_FAILURE);
	}
	if (testValue < INT16_MIN){
		std::cout << "ERROR: The Value has under flown an int16" << std::endl;
		_Exit(EXIT_FAILURE);
	}
	return new Operand(value, INT16);
}

IOperand const *OperandFactory::createInt32(std::string const &value) const {
	std::string stringValue;
	std::stringstream ss;
	ss << value;
	double long testValue;
	stringValue = value;
	ss >> testValue;
	if (testValue > INT32_MAX) {
		std::cout << "ERROR: The Value has overflown an int32" << std::endl;
		_Exit(EXIT_FAILURE);
	}
	if (testValue < INT32_MIN){
		std::cout << "ERROR: The Value has under flown an int32" << std::endl;
		_Exit(EXIT_FAILURE);
	}
	return new Operand(value, INT32);
}

IOperand const *OperandFactory::createFloat(std::string const &value) const {
	std::string stringValue;
	std::stringstream ss;
	ss << value;
	double long testValue;
	stringValue = value;
	ss >> testValue;
	if (testValue > std::numeric_limits<float>::max()) {
		std::cout << "ERROR: The Value has overflown an float" << std::endl;
		_Exit(EXIT_FAILURE);
	}
	if (testValue < std::numeric_limits<float>::min()){
		std::cout << "ERROR: The Value has under flown an float" << std::endl;
		_Exit(EXIT_FAILURE);
	}
	return new Operand(value, FLOAT);
}

IOperand const *OperandFactory::createDouble(std::string const &value) const {
	std::string stringValue;
	std::stringstream ss;
	ss << value;
	double long testValue;
	stringValue = value;
	ss >> testValue;
	if (testValue > std::numeric_limits<double>::max()) {
		std::cout << "ERROR: The Value has overflown an double" << std::endl;
		_Exit(EXIT_FAILURE);
	}
	if (testValue < std::numeric_limits<double>::min()){
		std::cout << "ERROR: The Value has under flown an double" << std::endl;
		_Exit(EXIT_FAILURE);
	}
	return new Operand(value, DOUBLE);
}
