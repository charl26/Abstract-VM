//
// Created by Charl THERON on 2017/11/16.
//

#include "VmStack.hpp"



void VmStack::add() {

}

void VmStack::sub() {

}

void VmStack::div() {

}

void VmStack::mul() {

}

void VmStack::mod() {

}

void VmStack::pop() {

}

void VmStack::dump() {

}

void VmStack::print() {

}

void VmStack::exit() {

}

void VmStack::push( IOperand *obj) {
	stack.emplace_back(obj);

}

const std::vector<IOperand *> &VmStack::getStack() {
	return stack;
}

