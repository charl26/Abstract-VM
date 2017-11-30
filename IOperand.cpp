//
// Created by Charl THERON on 2017/11/30.
//

#include "IOperand.hpp"

IOperand::IOperand(double value) {
	this->value = value;
}

IOperand::IOperand(IOperand &rhs) {
	*this = rhs;
}

IOperand& IOperand::operator=(const IOperand &rhs) {
	this->value = rhs.value;
	return *this;
}

double IOperand::getValue() const {
	return value;
}
