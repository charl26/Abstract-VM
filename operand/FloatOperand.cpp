//
// Created by Charl THERON on 2017/11/17.
//

#include <cmath>
#include "FloatOperand.hpp"
#include "OperandFactory.hpp"

int FloatOperand::getPrecision() const {
	return FLOAT;
}

eOperandType FloatOperand::getType() const {
	return FLOAT;
}

const IOperand *FloatOperand::operator+(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value + rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *FloatOperand::operator-(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value - rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *FloatOperand::operator*(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value * rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *FloatOperand::operator/(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value / rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *FloatOperand::operator%(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = fmod(this->value, rhs.value);
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const std::string &FloatOperand::toString() const {
	return stringValue;
}

FloatOperand::FloatOperand(const std::string &val) {
	std::stringstream ss;
	stringValue = val;
	ss << val;
	ss >> value;
	type = FLOAT;
}
