//
// Created by Charl THERON on 2017/11/29.
//

#ifndef VMEXCEPTIONS_HPP
#define VMEXCEPTIONS_HPP


#include <exception>
#include <stdexcept>
#include <iostream>

class VMExceptions : public virtual std::exception {
private:
	std::string message;
public:
	explicit VMExceptions (char const*message) throw();

	VMExceptions(const VMExceptions &vmExceptions);

	~VMExceptions() override;

	char const* what() const throw() override;

	void operator=(const VMExceptions &rhs);

};


#endif
