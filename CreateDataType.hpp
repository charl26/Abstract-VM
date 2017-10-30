//
// Created by Charl THERON on 2017/10/30.
//

#ifndef CREATEDATATYPE_HPP
#define CREATEDATATYPE_HPP

#include "ICreateDataType.hpp"

//ConcreteFactory
class CreateDataType : public virtual ICreateDataType {

	IOperand const * createOperand( eOperandType type, std::string const & value );

	IOperand const * createInt8( std::string const & value ) const;
	IOperand const * createInt16( std::string const & value ) const;
	IOperand const * createInt32( std::string const & value ) const;
	IOperand const * createFloat( std::string const & value ) const;
	IOperand const * createDouble( std::string const & value ) const;
};


#endif //ABSTRACT_VM_CREATEDATATYPE_HPP
