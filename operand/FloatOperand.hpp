//
// Created by Charl THERON on 2017/11/17.
//

#ifndef FLOATOPERAND_HPP
#define FLOATOPERAND_HPP


#include "IOperand.hpp"

class FloatOperand : public virtual IOperand {
public:
	explicit FloatOperand(const std::string &basic_string);

	int getPrecision() const override;

	eOperandType getType() const override;

	const IOperand *operator+(IOperand const &rhs) const override;

	const IOperand *operator-(IOperand const &rhs) const override;

	const IOperand *operator*(IOperand const &rhs) const override;

	const IOperand *operator/(IOperand const &rhs) const override;

	const IOperand *operator%(IOperand const &rhs) const override;

	const std::string &toString() const override;
};


#endif
