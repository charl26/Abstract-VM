//
// Created by Charl THERON on 2017/11/21.
//

#include <cmath>
#include "Operand.hpp"
#include "OperandFactory.hpp"

Operand::Operand(double value1, const std::string &value, eOperandType type) : IOperand(value1) {
	std::stringstream ss;
	ss << value;
	this->stringValue = value;
	this->type = type;
	ss >> this->value;
}

int Operand::getPrecision() const {
	return this->type;
}

eOperandType Operand::getType() const {
	return this->type;
}

const IOperand *Operand::operator+(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->getValue() + rhs.getValue();
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type, result);
}

const IOperand *Operand::operator-(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->getValue() - rhs.getValue();
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type, result);
}

const IOperand *Operand::operator*(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = this->getValue() * rhs.getValue();
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type, result);
}

const IOperand *Operand::operator/(IOperand const &rhs) const {
	std::stringstream ss;
	OperandFactory operandFactory;
	long double resultValue = fmod(this->getValue(), rhs.getValue());
	ss << resultValue;
	std::string result = ss.str();
	if (rhs.getType() > this->type)
		return operandFactory.createOperand(rhs.getType(), result);
	return operandFactory.createOperand(type, result);
}

const IOperand *Operand::operator%(IOperand const &rhs) const {
	printf("%f", rhs.getValue());
	return nullptr;
}

const std::string &Operand::toString() const {
	return stringValue;
}

double Operand::getValue() const {
	return value;
}
