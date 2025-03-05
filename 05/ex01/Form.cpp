/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:09:01 by fernando          #+#    #+#             */
/*   Updated: 2025/03/05 11:53:45 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("Default Form"), isSigned(false), signGrade(75), signExec(75) {
    std::cout << "Default Form constructor called." << std::endl;
}

Form::Form(const std::string _name) : name(_name), isSigned(false), signGrade(75), signExec(75) {
    std::cout << "Name Form constructor called." << std::endl;
}

Form::Form(int _signGrade, int _signExec) : name("Default Form"), isSigned(false), signGrade(_signGrade), signExec(_signExec) {
    std::cout << "Sign Grade and Sign Exec Form constructor called." << std::endl;
	if (this->signGrade > 150 || this->signExec > 150) {
		throw GradeTooLowException();
	} else if (this->signGrade < 1 || this->signExec < 1) {
		throw GradeTooHighException();
	}
}

Form::Form(const std::string _name, int _signGrade, int _signExec) : name(_name), isSigned(false), signGrade(_signGrade), signExec(_signExec) {
    std::cout << "Name and Signs Form constructor called." << std::endl;
	if (this->signGrade > 150 || this->signExec > 150) {
		throw GradeTooLowException();
	} else if (this->signGrade < 1 || this->signExec < 1) {
		throw GradeTooHighException();
	}
}

Form::Form(const Form& other) : name(other.name), isSigned(false), signGrade(other.signGrade), signExec(other.signExec) {
    std::cout << "Form parameter Form constructor called." << std::endl;
	if (this->signGrade > 150 || this->signExec > 150) {
		throw GradeTooLowException();
	} else if (this->signGrade < 1 || this->signExec < 1) {
		throw GradeTooHighException();
	}
}


Form::~Form(void) {
    std::cout << "Default Form destructor called." << std::endl;
}


Form&	Form::operator=(const Form& other) {
	if (this == &other)
		return (*this);
	return (*this);
}


const std::string	Form::getName(void) const {
	return (this->name);
}

bool	Form::getIsSigned(void) const {
	return (this->isSigned);
}

int		Form::getSignGrade(void) const {
	return (this->signGrade);
}

int		Form::getSignExec(void) const {
	return (this->signExec);
}


void	Form::beSigned(Bureaucrat& other) {
	if (other.getGrade() <= this->signGrade)
		this->isSigned = true;
	else {
		throw GradeTooLowException();
	}
}


const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade too High");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade too Low");
}

std::ostream&	operator<<(std::ostream& os, const Form& b) {
	os << b.getName() << ", grade to be signed: " << b.getSignGrade() << ". Signed: " << b.getIsSigned() << std::endl;
	
	return (os);
}
