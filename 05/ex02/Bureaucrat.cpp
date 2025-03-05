/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:24:51 by fmorenil          #+#    #+#             */
/*   Updated: 2025/03/05 14:30:13 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("noName"), grade(150) {
	std::cout << "Default Bureaucrat constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name), grade(_grade) {
	std::cout << "Arguments Bureaucrat constructor called." << std::endl;
	if (this->grade > 150) {
		throw GradeTooLowException();
	} else if (this->grade < 1) {
		throw GradeTooHighException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {
	std::cout << "Class Argument Bureaucrat constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat " << this->name << " destructor." << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
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

void	Bureaucrat::signForm(AForm& form) {
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cerr << this->name << " couldn´t sign " << form.getName() << " because " << e.what() << std::endl;;
	}
}

void	Bureaucrat::executeForm(AForm const & form) {
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << this->name << " couldn´t execute " << form.getName() << " because " << e.what() << std::endl;;
	}
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b) {
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}
