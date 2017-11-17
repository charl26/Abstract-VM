//
// Created by Charl THERON on 2017/11/17.
//

#ifndef INT16OPERAND_HPP
#define INT16OPERAND_HPP


#include "IOperand.hpp"

class INT16Operand : public virtual IOperand {
public:
	explicit INT16Operand(const std::string &basic_string);

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
