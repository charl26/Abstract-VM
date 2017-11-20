//
// Created by Charl THERON on 2017/11/16.
//

#ifndef INT8OPERAND_HPP
#define INT8OPERAND_HPP


#include "IOperand.hpp"

class INT8Operand : public virtual IOperand {

public:
	explicit INT8Operand(const std::string &basic_string) throw(std::exception());

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
