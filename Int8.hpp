//
// Created by Charl THERON on 2017/10/30.
//

#ifndef INT8_HPP
#define INT8_HPP


#include "IOperand.hpp"

class Int8 : public virtual IOperand {
private:
	eOperandType type;
	std::string value;
public:
	Int8(const std::string &value);

	int getPrecision() const override;

	eOperandType getType() const override;

	const IOperand *operator+(IOperand const &rhs) const override;

	const IOperand *operator-(IOperand const &rhs) const override;

	const IOperand *operator*(IOperand const &rhs) const override;

	const IOperand *operator/(IOperand const &rhs) const override;

	const IOperand *operator%(IOperand const &rhs) const override;

	const std::string &toString() const override;
};


#endif //ABSTRACT_VM_INT8_HPP
