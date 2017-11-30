//
// Created by Charl THERON on 2017/11/21.
//

#include "OperandFactory.hpp"
#include "Operand.hpp"
#include "VMExceptions.hpp"

IOperand const *OperandFactory::createOperand(eOperandType type, std::string const &value) const {
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

IOperand const *OperandFactory::createInt8(std::string const &value) const {
	std::string stringValue;
	std::stringstream ss;
	ss << value;
	double long testValue;
	stringValue = value;
	ss >> testValue;
	if (testValue > INT8_MAX) {
		throw VMExceptions("ERROR: The Value has Overflow an INT8");
	}
	if (testValue < INT8_MIN) {
		throw VMExceptions("ERROR: The Value has Underflow an INT8");
	}
	return new Operand(0, value, INT8);
}

IOperand const *OperandFactory::createInt16(std::string const &value) const {
	std::string stringValue;
	std::stringstream ss;
	ss << value;
	double long testValue;
	stringValue = value;
	ss >> testValue;
	if (testValue > INT16_MAX) {
		throw VMExceptions("ERROR: The Value has Overflow an INT16");
	}
	if (testValue < INT16_MIN) {
		throw VMExceptions("ERROR: The Value has Underflow an INT16");
	}
	return new Operand(0, value, INT16);
}

IOperand const *OperandFactory::createInt32(std::string const &value) const {
	std::string stringValue;
	std::stringstream ss;
	ss << value;
	double long testValue;
	stringValue = value;
	ss >> testValue;
	if (testValue > INT32_MAX) {
		throw VMExceptions("ERROR: The Value has Overflow an INT32");
	}
	if (testValue < INT32_MIN) {
		throw VMExceptions("ERROR: The Value has Underflow an INT32");
	}
	return new Operand(0, value, INT32);
}

IOperand const *OperandFactory::createFloat(std::string const &value) const {
	std::string stringValue;
	std::stringstream ss;
	ss << value;
	double long testValue;
	stringValue = value;
	ss >> testValue;
	if (testValue > std::numeric_limits<float>::max()) {
		throw VMExceptions("ERROR: The Value has Overflow an float");
	}
	if (testValue < std::numeric_limits<float>::min()) {
		throw VMExceptions("ERROR: The Value has Underflow an float");
	}
	return new Operand(0, value, FLOAT);
}

IOperand const *OperandFactory::createDouble(std::string const &value) const {
	std::string stringValue;
	std::stringstream ss;
	ss << value;
	double long testValue;
	stringValue = value;
	ss >> testValue;
	if (testValue > std::numeric_limits<double>::max()) {
		throw VMExceptions("ERROR: The Value has Overflown an double");
	}
	if (testValue < std::numeric_limits<double>::min()) {
		throw VMExceptions("ERROR: The Value has Underflow an double");
	}
	return new Operand(0, value, DOUBLE);
}
