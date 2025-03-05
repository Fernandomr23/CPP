/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:05:21 by fmorenil          #+#    #+#             */
/*   Updated: 2025/03/05 14:56:29 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("Emilio", 120);
		ShrubberyCreationForm *b = new ShrubberyCreationForm("Acelgas");
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << *a << std::endl;
		std::cout << *b << std::endl;

		a->executeForm(*b);
		std::cout << *b << std::endl;

		a->signForm(*b);
		std::cout << *b << std::endl;
		
		a->executeForm(*b);
		std::cout << *b << std::endl;
		
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		std::cout << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------------------------------------------" << std::endl;
	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("Emperor", 27);
		PresidentialPardonForm *b = new PresidentialPardonForm("this other dude");
		PresidentialPardonForm *c = new PresidentialPardonForm(*b);
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << *a << std::endl;
		std::cout << *b << std::endl;
		std::cout << *c << std::endl;
		a->signForm(*b);
		std::cout << *b << std::endl;
		std::cout << *c << std::endl;
		a->signForm(*c);
		std::cout << *b << std::endl;
		std::cout << *c << std::endl;
		a->executeForm(*b);
		a->executeForm(*c);
		std::cout << *a << std::endl;
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		delete c;
		std::cout << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------------------------------------------" << std::endl;
	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("Emperor", 45);
		RobotomyRequestForm *b = new RobotomyRequestForm("Bender");
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << *a << std::endl;
		std::cout << *b << std::endl;
		// std::cout << c;
		a->executeForm(*b);
		std::cout << *b << std::endl;
		a->signForm(*b);
		std::cout << *b << std::endl;
		for (int i= 0; i < 10; i++)
			a->executeForm(*b);
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		// delete c;
		std::cout << std::endl;
	}
	return (0);
}
