//
// Created by Charl THERON on 2017/10/30.
//

#ifndef INT8_HPP
#define INT8_HPP


#include "IOperand.hpp"

class Int8 : public virtual IOperand {
private:
	std::string value;
public:
	Int8(const std::string &value);
};


#endif //ABSTRACT_VM_INT8_HPP
