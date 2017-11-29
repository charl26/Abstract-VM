//
// Created by Charl THERON on 2017/11/21.
//

#ifndef IOPERAND_HPP
#define IOPERAND_HPP

#pragma once
#include <iostream>
#include <sstream>
enum eOperandType{INT8, INT16, INT32, FLOAT, DOUBLE};

class IOperand {
public:
	double value;
	virtual int getPrecision() const = 0; // Precision of the type of the instance
	virtual eOperandType getType() const = 0; // Type of the instance
	virtual IOperand const * operator+( IOperand const & rhs ) const = 0; // Sum
	virtual IOperand const * operator-( IOperand const & rhs ) const = 0; // Difference
	virtual IOperand const * operator*( IOperand const & rhs ) const = 0; // Product
	virtual IOperand const * operator/( IOperand const & rhs ) const = 0; // Quotient
	virtual IOperand const * operator%( IOperand const & rhs ) const = 0; // Modulo
	virtual std::string const & toString() const = 0; // String representation of the instance
	virtual ~IOperand() = default;
};


#endif