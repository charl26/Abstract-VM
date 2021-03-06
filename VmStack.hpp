//
// Created by Charl THERON on 2017/11/16.
//

#ifndef VMSTACK_HPP
#define VMSTACK_HPP


#include <vector>
#include <cstdlib>
#include "IOperand.hpp"

class VmStack {
private:
	std::vector<IOperand*> stack;
public:
	void push(IOperand *obj);
	void add();
	void sub();
	void div();
	void mul();
	void mod();
	void print();
	void dump();
	void pop();
	void exit();

	void assert(eOperandType type, std::string value);
};

#endif
