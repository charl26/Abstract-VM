//
// Created by Charl THERON on 2017/11/21.
//

#include "OperandFactory.hpp"
#include "Operand.hpp"

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
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
		_Exit(EXIT_FAILURE);
	}
}

IOperand const *OperandFactory::createInt8(std::string const &value) const {
	return new Operand(value, INT8);
}

IOperand const *OperandFactory::createInt16(std::string const &value) const {
	return new Operand(value, INT16);
}

IOperand const *OperandFactory::createInt32(std::string const &value) const {
	return new Operand(value, INT32);
}

IOperand const *OperandFactory::createFloat(std::string const &value) const {
	return new Operand(value, FLOAT);
}

IOperand const *OperandFactory::createDouble(std::string const &value) const {
	return new Operand(value, DOUBLE);
}
