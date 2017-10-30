//
// Created by Charl THERON on 2017/10/30.
//

#include "CreateDataType.hpp"
#include "Int8.hpp"
#include "Double.hpp"
#include "Float.hpp"
#include "Int32.hpp"
#include "Int16.hpp"

IOperand const *CreateDataType::createInt8(std::string const &value) const {
	return new Int8(value);
}

IOperand const *CreateDataType::createInt16(std::string const &value) const {
	return new Int16(value);
}

IOperand const *CreateDataType::createInt32(std::string const &value) const {
	return new Int32(value);
}

IOperand const *CreateDataType::createFloat(std::string const &value) const {
	return new Float(value);
}

IOperand const *CreateDataType::createDouble(std::string const &value) const {
	return new Double(value);
}

IOperand const *CreateDataType::createOperand(eOperandType type, std::string const &value) {
	switch (type) {
		case Int8: {
			return (createInt8(value));
		}
		case Int16: {
			return (createInt16(value));
		}
		case Int32: {
			return (createInt32(value));
		}
		case Float: {
			return (createFloat(value));
		}
		case Double: {
			return (createDouble(value));
		}
		default:{
			return nullptr;
		}
	}
}
