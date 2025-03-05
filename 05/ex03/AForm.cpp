/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:09:01 by fernando          #+#    #+#             */
/*   Updated: 2025/03/05 11:53:45 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : name("Default Form"), isSigned(false), signGrade(75), execGrade(75) {
    std::cout << "Default Form constructor called." << std::endl;
}

AForm::AForm(const std::string _name) : name(_name), isSigned(false), signGrade(75), execGrade(75) {
    std::cout << "Name Form constructor called." << std::endl;
}

AForm::AForm(int _signGrade, int _execGrade) : name("Default Form"), isSigned(false), signGrade(_signGrade), execGrade(_execGrade) {
    std::cout << "Sign Grade and Sign Exec Form constructor called." << std::endl;
	if (this->signGrade > 150 || this->execGrade > 150) {
		throw GradeTooLowException();
	} else if (this->signGrade < 1 || this->execGrade < 1) {
		throw GradeTooHighException();
	}
}

AForm::AForm(const std::string _name, int _signGrade, int _execGrade) : name(_name), isSigned(false), signGrade(_signGrade), execGrade(_execGrade) {
    std::cout << "Name and Grades Form constructor called." << std::endl;
	if (this->signGrade > 150 || this->execGrade > 150) {
		throw GradeTooLowException();
	} else if (this->signGrade < 1 || this->execGrade < 1) {
		throw GradeTooHighException();
	}
}

AForm::AForm(const AForm& other) : name(other.name), isSigned(false), signGrade(other.signGrade), execGrade(other.execGrade) {
    std::cout << "AForm parameter Form constructor called." << std::endl;
	if (this->signGrade > 150 || this->execGrade > 150) {
		throw GradeTooLowException();
	} else if (this->signGrade < 1 || this->execGrade < 1) {
		throw GradeTooHighException();
	}
}


AForm::~AForm(void) {
    std::cout << "Default Form destructor called." << std::endl;
}


AForm&	AForm::operator=(const AForm& other) {
	if (this == &other)
		return (*this);
	return (*this);
}


const std::string	AForm::getName(void) const {
	return (this->name);
}

bool	AForm::getIsSigned(void) const {
	return (this->isSigned);
}

int		AForm::getSignGrade(void) const {
	return (this->signGrade);
}

int		AForm::getExecGrade(void) const {
	return (this->execGrade);
}


void	AForm::beSigned(Bureaucrat& other) {
	if (other.getGrade() <= this->signGrade)
		this->isSigned = true;
	else {
		throw GradeTooLowException();
	}
}


const char *AForm::GradeTooHighException::what() const throw() {
	return ("Grade too High");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("Grade too Low");
}

const char *AForm::FormNotSignedException::what() const throw() {
	return ("Form needs to be signed before executing");
}

std::ostream&	operator<<(std::ostream& os, const AForm& b) {
	os << b.getName() << ", grade to be signed: " << b.getSignGrade() << ". Signed: " << b.getIsSigned() << std::endl;
	
	return (os);
}
