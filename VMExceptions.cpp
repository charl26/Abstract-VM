//
// Created by Charl THERON on 2017/11/29.
//


#include "VMExceptions.hpp"

VMExceptions::VMExceptions(char const *const message) throw()  {
	this->message = message;
}

char const *VMExceptions::what() const throw()  {
	std::cout << message << std::endl;
	return std::exception::what();
}


void VMExceptions::operator=(const VMExceptions &rhs) {
	message = rhs.message;
}

VMExceptions::VMExceptions(const VMExceptions &vmExceptions) {
	message = vmExceptions.message;
}

VMExceptions::~VMExceptions() = default;
