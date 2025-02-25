/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:24:51 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/25 16:51:42 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("noName"), grade(150) {}

Bureaucrat::Bureaucrat(int _grade) : name("noName"), grade(_grade) {
	if (this->grade > 150) {
		GradeTooHighException();
	} else if (this->grade < 1) {
		GradeTooLowException();
	}
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Called Bureaucrat " << this->name << " destructor." << std::endl;
}

const int Bureaucrat::getGrade(void) {
	return (this->grade);
}

const std::string Bureaucrat::getName(void) {
	return (this->name);
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat& b) {
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}