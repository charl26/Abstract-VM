//
// Created by Charl THERON on 2017/11/16.
//

#include <cmath>
#include "VmStack.hpp"
#include "OperandFactory.hpp"


void VmStack::add() {
	if (stack.size() < 2) {
		std::cout << "ERROR: only one value of the stack." << std::endl;
		_Exit(EXIT_FAILURE);
	}
	IOperand *value[2];
	value[0] = stack.back();
	stack.pop_back();
	value[1] = stack.back();
	stack.pop_back();
	long double newValue;
	newValue = value[0]->value + value[1]->value;
	OperandFactory factory;
	std::stringstream ss;
	ss << newValue;
	std::string result = ss.str();
	if (value[0]->getType() > value[1]->getType())
		push(const_cast<IOperand *>(factory.createOperand(value[0]->getType(), result)));
	else
		push(const_cast<IOperand *>(factory.createOperand(value[1]->getType(), result)));
}

void VmStack::sub() {
	if (stack.size() < 2) {
		std::cout << "ERROR: only one value of the stack." << std::endl;
		_Exit(EXIT_FAILURE);
	}
	IOperand *value[2];
	value[0] = stack.back();
	stack.pop_back();
	value[1] = stack.back();
	stack.pop_back();
	long double newValue;
	newValue = value[0]->value - value[1]->value;
	OperandFactory factory;
	std::stringstream ss;
	ss << newValue;
	std::string result = ss.str();
	if (value[0]->getType() > value[1]->getType())
		push(const_cast<IOperand *>(factory.createOperand(value[0]->getType(), result)));
	else
		push(const_cast<IOperand *>(factory.createOperand(value[1]->getType(), result)));
}

void VmStack::div() {
	if (stack.size() < 2) {
		std::cout << "ERROR: only one value of the stack." << std::endl;
		_Exit(EXIT_FAILURE);
	}
	IOperand *value[2];
	value[0] = stack.back();
	stack.pop_back();
	value[1] = stack.back();
	stack.pop_back();
	long double newValue;
	newValue = value[0]->value / value[1]->value;
	OperandFactory factory;
	std::stringstream ss;
	ss << newValue;
	std::string result = ss.str();
	if (value[0]->getType() > value[1]->getType())
		push(const_cast<IOperand *>(factory.createOperand(value[0]->getType(), result)));
	else
		push(const_cast<IOperand *>(factory.createOperand(value[1]->getType(), result)));

}

void VmStack::mul() {
	if (stack.size() < 2) {
		std::cout << "ERROR: only one value of the stack." << std::endl;
		_Exit(EXIT_FAILURE);
	}
	IOperand *value[2];
	value[0] = stack.back();
	stack.pop_back();
	value[1] = stack.back();
	stack.pop_back();
	long double newValue;
	newValue = value[0]->value * value[1]->value;
	OperandFactory factory;
	std::stringstream ss;
	ss << newValue;
	std::string result = ss.str();
	if (value[0]->getType() > value[1]->getType())
		push(const_cast<IOperand *>(factory.createOperand(value[0]->getType(), result)));
	else
		push(const_cast<IOperand *>(factory.createOperand(value[1]->getType(), result)));
}

void VmStack::mod() {
	if (stack.size() < 2) {
		std::cout << "ERROR: only one value of the stack." << std::endl;
		_Exit(EXIT_FAILURE);
	}
	IOperand *value[2];
	value[0] = stack.back();
	stack.pop_back();
	value[1] = stack.back();
	stack.pop_back();
	long double newValue;
	newValue = fmod(static_cast<double>(value[0]->value), static_cast<double>(value[1]->value));
	OperandFactory factory;
	std::stringstream ss;
	ss << newValue;
	std::string result = ss.str();
	if (value[0]->getType() > value[1]->getType())
		push(const_cast<IOperand *>(factory.createOperand(value[0]->getType(), result)));
	else
		push(const_cast<IOperand *>(factory.createOperand(value[1]->getType(), result)));
}

void VmStack::pop() {
	if (stack.empty()) {
		std::cout << "ERROR: the Stack is empty" << std::endl;
		_Exit(EXIT_FAILURE);
	}
	stack.pop_back();
}

void VmStack::dump() {
	if (stack.empty()) {
		std::cout << "ERROR: the Stack is empty" << std::endl;
		_Exit(EXIT_FAILURE);
	}
	for (auto size = static_cast<int>(stack.size()); size > 0; size--) {
		std::cout << stack.back()->value << std::endl;
	}

}

void VmStack::print() {
	if (stack.empty()) {
		std::cout << "ERROR: the Stack is empty" << std::endl;
		_Exit(EXIT_FAILURE);
	}
	if (stack.back()->getType() > INT8) {
		_Exit(EXIT_SUCCESS);
	}
	std::cout << static_cast<char>(stack.back()->value) << std::endl;
}

void VmStack::exit() {
	_Exit(EXIT_SUCCESS);
}

void VmStack::push(IOperand *obj) {
	stack.emplace_back(obj);

}

const std::vector<IOperand *> &VmStack::getStack() {
	return stack;
}

void VmStack::assert(eOperandType type, std::string value) {
	auto obj = stack.back();
	if (obj->getType() == type) {
		if (obj->toString().compare(value)){
			return;
		} else {
			std::cout << "ERROR: the values don't match." << obj->toString() << "<- obj value : value ->" << value << std::endl;
			_Exit(EXIT_FAILURE);
		}
	} else {
		std::cout << "ERROR: the type is incorrect." << std::endl;
		_Exit(EXIT_FAILURE);
	}
}

