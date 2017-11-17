//
// Created by Charl THERON on 2017/11/17.
//


#include <cmath>
#include "INT16Operand.hpp"
#include "OperandFactory.hpp"

int INT16Operand::getPrecision() const {
	return INT16;
}

eOperandType INT16Operand::getType() const {
	return INT16;
}

const IOperand *INT16Operand::operator+(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value + rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *INT16Operand::operator-(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value - rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *INT16Operand::operator*(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value * rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *INT16Operand::operator/(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value / rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *INT16Operand::operator%(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = fmod(this->value, rhs.value);
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const std::string &INT16Operand::toString() const {
	return stringValue;
}

INT16Operand::INT16Operand(const std::string &val) {
	std::stringstream ss;
	stringValue = val;
	ss << val;
	ss >> value;
	type = INT16;
}