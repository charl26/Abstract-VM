//
// Created by Charl THERON on 2017/11/17.
//

#include <cfloat>
#include <cmath>
#include "DoubleOperand.hpp"
#include "OperandFactory.hpp"

int DoubleOperand::getPrecision() const {
	return DOUBLE;
}

eOperandType DoubleOperand::getType() const {
	return DOUBLE;
}

const IOperand *DoubleOperand::operator+(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value + rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *DoubleOperand::operator-(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value - rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *DoubleOperand::operator*(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value * rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *DoubleOperand::operator/(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->value / rhs.value;
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const IOperand *DoubleOperand::operator%(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = fmod(this->value, rhs.value);
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type,result);
}

const std::string &DoubleOperand::toString() const {
	return stringValue;
}

DoubleOperand::DoubleOperand(const std::string &val) throw(std::exception) {
	std::stringstream ss;
	stringValue = val;
	ss << val;
	ss >> value;
	type = DOUBLE;
	if (value > DBL_MAX || value < DBL_MIN)
		throw "ERROR: Out of Double range";
}
