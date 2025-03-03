/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:24:51 by fmorenil          #+#    #+#             */
/*   Updated: 2025/03/02 00:30:35 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("noName"), grade(150) {
	std::cout << "Default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name), grade(_grade) {
	std::cout << "Arguments constructor called." << std::endl;
	if (this->grade > 150) {
		throw GradeTooLowException();
	} else if (this->grade < 1) {
		throw GradeTooHighException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {
	std::cout << "Class Argument constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat " << this->name << " destructor." << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other) {
		this->grade = other.grade;
	}
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("Grade too High");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Grade too Low");
}

int Bureaucrat::getGrade(void) const {
	return (this->grade);
}

const std::string Bureaucrat::getName(void) const {
	return (this->name);
}

void	Bureaucrat::decreaseBureaucrat(void) {
	std::cout << "Decrease grade called." << std::endl;
	if (this->grade + 1 > 150) {
		throw GradeTooLowException();
	} else {
		this->grade++;
	}
}

void	Bureaucrat::increaseBureaucrat(void) {
	std::cout << "Increase grade called." << std::endl;
	if (this->grade - 1 < 1) {
		throw GradeTooHighException();
	} else {
		this->grade--;
	}
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b) {
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}
