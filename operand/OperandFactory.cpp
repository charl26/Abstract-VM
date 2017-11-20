//
// Created by Charl THERON on 2017/11/17.
//

#include "OperandFactory.hpp"
#include "INT8Operand.hpp"
#include "INT16Operand.hpp"
#include "INT32Operand.hpp"
#include "FloatOperand.hpp"
#include "DoubleOperand.hpp"

IOperand const *OperandFactory::createOperand(eOperandType type, std::string const &value) const {
	try {
		switch (type) {
			case INT8: {
				return createInt8(value);
			}
			case INT16: {
				return createInt16(value);
			}
			case INT32: {
				return createInt32(value);
			}
			case FLOAT: {
				return createFloat(value);
			}
			case DOUBLE: {
				return createDouble(value);
			}
			default:
				return nullptr;
		}
	}
	catch (std::exception exception) {
		std::cout << exception.what() << std::endl;
		exit(1);
	}

}

IOperand const *OperandFactory::createInt8(std::string const &value) const {
	return new INT8Operand(value);
}

IOperand const *OperandFactory::createInt16(std::string const &value) const {
	return new INT16Operand(value);
}

IOperand const *OperandFactory::createInt32(std::string const &value) const {
	return new INT32Operand(value);
}

IOperand const *OperandFactory::createFloat(std::string const &value) const {
	return new FloatOperand(value);
}

IOperand const *OperandFactory::createDouble(std::string const &value) const {
	return new DoubleOperand(value);
}
