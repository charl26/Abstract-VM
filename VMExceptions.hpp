//
// Created by Charl THERON on 2017/11/29.
//

#ifndef ABSTRACT_VM_VMEXCEPTIONS_HPP
#define ABSTRACT_VM_VMEXCEPTIONS_HPP


#include <exception>
#include <stdexcept>
#include <iostream>

class VMExceptions : public virtual std::exception {
private:
	std::string message;
public:
	explicit VMExceptions (char const*message) throw();

	char const* what() const throw() override;
};


#endif //ABSTRACT_VM_VMEXCEPTIONS_HPP
