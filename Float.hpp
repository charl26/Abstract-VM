//
// Created by Charl THERON on 2017/10/30.
//

#ifndef ABSTRACT_VM_FLOAT_HPP
#define ABSTRACT_VM_FLOAT_HPP


#include "IOperand.hpp"

class Float : public virtual IOperand {
private:
	std::string value;
public:
	Float(const std::string &value);
};


#endif //ABSTRACT_VM_FLOAT_HPP
