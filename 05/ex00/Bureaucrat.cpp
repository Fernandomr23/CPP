/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:24:51 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/27 19:30:49 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("noName"), grade(150) {}

Bureaucrat::Bureaucrat(int _grade) : name("noName"), grade(_grade) {
	if (this->grade > 150) {
		throw GradeTooHighException();
	} else if (this->grade < 1) {
		throw GradeTooLowException();
	}
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Called Bureaucrat " << this->name << " destructor." << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("Grade too High");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Grade too Low");
}

int Bureaucrat::getGrade(void) {
	return (this->grade);
}

const std::string Bureaucrat::getName(void) {
	return (this->name);
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat& b) {
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}
