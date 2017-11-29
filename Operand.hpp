//
// Created by Charl THERON on 2017/11/21.
//

#ifndef OPERAND_HPP
#define OPERAND_HPP


#include "IOperand.hpp"

class Operand : public virtual IOperand{
private:
	eOperandType type;
	std::string stringValue;
public:
	Operand(const std::string &value, eOperandType type);

	int getPrecision() const override;

	eOperandType getType() const override;

	const IOperand *operator+(IOperand const &rhs) const override;

	const IOperand *operator-(IOperand const &rhs) const override;

	const IOperand *operator*(IOperand const &rhs) const override;

	const IOperand *operator/(IOperand const &rhs) const override;

	const IOperand *operator%(IOperand const &rhs) const override;

	const std::string &toString() const override;

	double getValue() const;
};


#endif
