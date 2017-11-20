//
// Created by Charl THERON on 2017/11/17.
//

#ifndef INT32OPERAND_HPP
#define INT32OPERAND_HPP


#include "IOperand.hpp"

class INT32Operand : public virtual IOperand {
public:
	explicit INT32Operand(const std::string &basic_string);

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
