cmake_minimum_required(VERSION 3.8)
project(Abstract_VM)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
		main.cpp VmStack.cpp VmStack.hpp operand/IOperand.hpp operand/INT8Operand.cpp operand/INT8Operand.hpp operand/OperandFactory.cpp operand/OperandFactory.hpp operand/INT16Operand.cpp operand/INT16Operand.hpp operand/INT32Operand.cpp operand/INT32Operand.hpp operand/FloatOperand.cpp operand/FloatOperand.hpp operand/DoubleOperand.cpp operand/DoubleOperand.hpp)

add_executable(Abstract_VM ${SOURCE_FILES})