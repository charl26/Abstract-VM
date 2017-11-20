//
// Created by Charl THERON on 2017/11/17.
//

#ifndef DOUBLEOPERAND_HPP
#define DOUBLEOPERAND_HPP


#include "IOperand.hpp"

class DoubleOperand  : public virtual IOperand {
public:
	explicit DoubleOperand(const std::string &basic_string) throw(std::exception);

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
