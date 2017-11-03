//
// Created by Charl THERON on 2017/10/30.
//

#include "Int8.hpp"
#include "CreateDataType.hpp"

Int8::Int8(const std::string &value) : value(value) {
	this->type = static_cast<eOperandType>(Int8);
}

int Int8::getPrecision() const {
	return 0;
}

eOperandType Int8::getType() const {
	return this->type;
}

const IOperand *Int8::operator+(IOperand const &rhs) const {
	return nullptr;
}

const IOperand *Int8::operator-(IOperand const &rhs) const {
	return nullptr;
}

const IOperand *Int8::operator*(IOperand const &rhs) const {
	return nullptr;
}

const IOperand *Int8::operator/(IOperand const &rhs) const {
	return nullptr;
}

const IOperand *Int8::operator%(IOperand const &rhs) const {
	return nullptr;
}

const std::string &Int8::toString() const {
	return <#initializer#>;
}
