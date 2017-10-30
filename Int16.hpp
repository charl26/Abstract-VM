//
// Created by Charl THERON on 2017/10/30.
//

#ifndef ABSTRACT_VM_INT16_HPP
#define ABSTRACT_VM_INT16_HPP


#include "IOperand.hpp"

class Int16 : public virtual IOperand  {
private:
	std::string value;
public:
	Int16(const std::string &value);
};


#endif //ABSTRACT_VM_INT16_HPP
