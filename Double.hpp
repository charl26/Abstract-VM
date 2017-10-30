//
// Created by Charl THERON on 2017/10/30.
//

#ifndef ABSTRACT_VM_DOUBLE_HPP
#define ABSTRACT_VM_DOUBLE_HPP


#include "IOperand.hpp"

class Double : public virtual IOperand {
private:
	std::string value;
public:
	Double(const std::string &value);
};


#endif //ABSTRACT_VM_DOUBLE_HPP
