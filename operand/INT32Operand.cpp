//
// Created by Charl THERON on 2017/11/17.
//

#include <cmath>
#include "INT32Operand.hpp"
#include "OperandFactory.hpp"

int INT32Operand::getPrecision() const {
	return INT32;
}

eOperandType INT32Operand::getType() const {
	return INT32;
}

const IOperand *INT32Operand::operator+(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value + rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *INT32Operand::operator-(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value - rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *INT32Operand::operator*(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value * rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *INT32Operand::operator/(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value / rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *INT32Operand::operator%(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = fmod(this->value, rhs.value);
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const std::string &INT32Operand::toString() const {
	return stringValue;
}

INT32Operand::INT32Operand(const std::string &val) {
	std::stringstream ss;
	stringValue = val;
	ss << val;
	ss >> value;
	type = INT32;
}