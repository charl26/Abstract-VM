//
// Created by Charl THERON on 2017/10/30.
//

#ifndef ABSTRACT_VM_INT32_HPP
#define ABSTRACT_VM_INT32_HPP


#include "IOperand.hpp"

class Int32 : public virtual IOperand {
private:
	std::string value;
public:
	Int32(const std::string &value);
};


#endif //ABSTRACT_VM_INT32_HPP
