cmake_minimum_required(VERSION 3.8)
project(AbstractVMRelase)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
		IOperand.hpp
		main.cpp
		Operand.cpp
		Operand.hpp
		OperandFactory.cpp
		OperandFactory.hpp
		VmStack.cpp
		VmStack.hpp)

add_executable(AbstractVMRelase ${SOURCE_FILES})