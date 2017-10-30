//
// Created by Charl THERON on 2017/10/30.
//

#ifndef ICREATEDATATYPE_HPP
#define ICREATEDATATYPE_HPP

//FactoryBase
#include "IOperand.hpp"

class ICreateDataType {
	virtual IOperand const * createOperand( eOperandType type, std::string const & value ) = 0;
};


#endif
