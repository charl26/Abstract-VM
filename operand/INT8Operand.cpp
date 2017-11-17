//
// Created by Charl THERON on 2017/11/16.
//

#include <cmath>
#include "INT8Operand.hpp"
#include "OperandFactory.hpp"

int INT8Operand::getPrecision() const {
	return INT8;
}

eOperandType INT8Operand::getType() const {
	return INT8;
}

const IOperand *INT8Operand::operator+(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value + rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *INT8Operand::operator-(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value - rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *INT8Operand::operator*(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value * rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *INT8Operand::operator/(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value / rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *INT8Operand::operator%(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = fmod(this->value, rhs.value);
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const std::string &INT8Operand::toString() const {
	return stringValue;
}

INT8Operand::INT8Operand(const std::string &val) throw(std::exception()) {
	std::stringstream ss;
	stringValue = val;
	ss << val;
	ss >> value;
	type = INT8;
}
