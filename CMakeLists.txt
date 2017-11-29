cmake_minimum_required(VERSION 3.8)
project(Abstract_VM)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
		IOperand.hpp
		main.cpp
		Operand.cpp
		Operand.hpp
		OperandFactory.cpp
		OperandFactory.hpp
		VmStack.cpp
		VmStack.hpp VMExceptions.cpp VMExceptions.hpp)

add_executable(Abstract_VM ${SOURCE_FILES})