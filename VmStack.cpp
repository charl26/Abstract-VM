//
// Created by Charl THERON on 2017/11/16.
//

#include <cmath>
#include "VmStack.hpp"
#include "OperandFactory.hpp"
#include "VMExceptions.hpp"


void VmStack::add() {
	if (stack.size() < 2) {
		throw VMExceptions("ERROR: only one value of the stack.");
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
		throw VMExceptions("ERROR: only one value of the stack.");
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
		throw VMExceptions("ERROR: only one value of the stack.");
	}
	IOperand *value[2];
	value[0] = stack.back();
	stack.pop_back();
	value[1] = stack.back();
	stack.pop_back();
	long double newValue;
	if (value[0]->value  == 0 | value[1]->value == 0) {
		throw VMExceptions("ERROR: Can not divide by 0");
	}
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
		throw VMExceptions("ERROR: only one value of the stack.");
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
		throw VMExceptions("ERROR: only one value of the stack.");
	}
	IOperand *value[2];
	value[0] = stack.back();
	stack.pop_back();
	value[1] = stack.back();
	stack.pop_back();
	long double newValue;
	if (value[0]->value  == 0 | value[1]->value == 0) {
		throw VMExceptions("ERROR: Can not divide by 0");
	}
	newValue = std::fmodl(value[0]->value, value[1]->value);
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
		throw VMExceptions("ERROR: POP the Stack is empty");
	}
	stack.pop_back();
}

void VmStack::dump() {
	if (stack.empty()) {
		throw VMExceptions("ERROR: DUMP the Stack is empty");
	}
	for (auto size = static_cast<int>(stack.size()); size > 0; size--) {
		std::cout << stack[size -1]->value << std::endl;
	}

}

void VmStack::print() {
	if (stack.empty()) {
		throw VMExceptions("ERROR: PRINT the Stack is empty");
	}
	if (stack.back()->getType() > INT8) {
		throw VMExceptions("ERROR: not of int8");
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
		if (obj->toString() == value){
			return;
		} else {
			std::string error = "ERROR: the values don't match " + obj->toString() + " <- obj value : value -> " + value;
			throw VMExceptions(error.c_str());
		}
	} else {
		throw VMExceptions("ERROR: the type is incorrect.");
	}
}

