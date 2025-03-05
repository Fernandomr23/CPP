/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:39:24 by fernando          #+#    #+#             */
/*   Updated: 2025/03/05 17:13:55 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	std::cout << "Default Intern constructor called." << std::endl;
}

Intern::Intern(const Intern& other) {
	(void)other;
	std::cout << "Copy Intern constructor called." << std::endl;
}

Intern& Intern::operator=(const Intern& other) {
	if (this == &other) {
		return (*this);
	}

	return (*this);
}

Intern::~Intern(void) {
	std::cout << "Default Intern destructor called." << std::endl;
}

AForm*	Intern::makeForm(std::string formName, std::string formTarget) {
	std::string formTypes[] = {
		"presidential pardon",
		"shrubbery creation",
		"robotomy request"
	};
	AForm* (Intern::*InternPtr[3])(std::string) = {
		&Intern::makePresidential,
		&Intern::makeShrubbery,
		&Intern::makeRobotomy
	};
	for (int i = 0; i < 3; i++) {
		if (formName == formTypes[i]) {
			return ((this->*InternPtr[i])(formTarget));
		}
	}
	throw IncorrectFormNameException();
}

AForm*	Intern::makePresidential(std::string formTarget) {
	PresidentialPardonForm	*tmp = new PresidentialPardonForm(formTarget);
	std::cout << "Intern creates Presidential pardon Form." << std::endl;
	return (tmp);
}

AForm*	Intern::makeRobotomy(std::string formTarget) {
	RobotomyRequestForm	*tmp = new RobotomyRequestForm(formTarget);
	std::cout << "Intern creates Robotomy request Form." << std::endl;
	return (tmp);
}

AForm*	Intern::makeShrubbery(std::string formTarget) {
	ShrubberyCreationForm	*tmp = new ShrubberyCreationForm(formTarget);
	std::cout << "Intern creates Shrubbery creation Form." << std::endl;
	return (tmp);
}

const char*	Intern::IncorrectFormNameException::what(void) const throw() {
	return ("Form needs a valid name to be created.");
}
