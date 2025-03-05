/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:05:21 by fmorenil          #+#    #+#             */
/*   Updated: 2025/03/05 17:23:46 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat();
		Intern *z = new Intern();
		AForm *b;
		try
		{
			b = z->makeForm("SomeRandomForm", "Clown");
		}
		catch(Intern::IncorrectFormNameException &e)
		{
			std::cerr << e.what() << '\n';
		}
		
		b = z->makeForm("presidential pardon", "Clown");
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << *a << std::endl;
		std::cout << *b << std::endl;

		try
		{
			b->beSigned(*a);
			b->execute(*a);
		}
		catch(const std::exception &e)
		{
			std::cerr << "\033[33m" << a->getName() << " was not able to sign " << b->getName() << ": " << e.what() << "\033[0m" << std::endl;
		}

		std::cout << std::endl;
		std::cout << *b << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		delete z;
		std::cout << std::endl;
	}
	// std::cout << "--------------------------------------------------------------------------------------------------------------" << std::endl;
	// {
	// 	std::cout << std::endl;

	// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	// 	Bureaucrat *a = new Bureaucrat("Assistant", 145);
	// 	Bureaucrat *b = new Bureaucrat("CEO", 1);
	// 	Form *c = new PresidentialPardonForm("some dude");
	// 	// Form *d = new Form(*c);
	// 	// Form *d = new Form("Rent Contract", 140, 100); // you are not able to construct an abstract class here
	// 	std::cout << std::endl;

	// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
	// 	std::cout << a;
	// 	std::cout << b;
	// 	std::cout << c;
	// 	std::cout << std::endl;

	// 	// Try to execute before signing
	// 	try
	// 	{
	// 		c->execute(*b);
	// 	}
	// 	catch (Form::FormNotSignedException &e)
	// 	{
	// 		std::cerr << "\033[33m" << a->getName() << " was not able to execute the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	// Assistant signs the Form
	// 	try
	// 	{
	// 		c->beSigned(*a);
	// 		// a->signForm(*c);
	// 	}
	// 	catch(Bureaucrat::GradeTooLowException &e)
	// 	{
	// 		std::cerr << "\033[33m" << a->getName() << " was not able to sign the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
	// 	}

	// 	// CEO signs the Form
	// 	std::cout << std::endl;
	// 	std::cout << c;
	// 	std::cout << std::endl;
	// 	try
	// 	{
	// 		c->beSigned(*b);
	// 		// b->signForm(*c);
	// 	}
	// 	// catch(Form::GradeTooLowException &e)
	// 	catch(Bureaucrat::GradeTooLowException &e)
	// 	{
	// 		std::cerr << "\033[33m" << b->getName() << " was not able to sign the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	std::cout << c;
	// 	std::cout << std::endl;

	// 	// try signing the from again
	// 	std::cout << std::endl;
	// 	b->signForm(*c);
	// 	std::cout << std::endl;

	// 	// execute the Form from assistant
	// 	try
	// 	{
	// 		c->execute(*a);
	// 		// a.executeForm(*c);
	// 	}
	// 	catch(Bureaucrat::GradeTooLowException &e)
	// 	{
	// 		std::cerr << "\033[33m" << a->getName() << " was not able to execute the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
	// 	}
	// 	std::cout << std::endl;

	// 	// execute Form from CEO
	// 	try
	// 	{
	// 		c->execute(*b);
	// 		// b.executeForm(*c);
	// 	}
	// 	catch(Bureaucrat::GradeTooLowException &e)
	// 	{
	// 		std::cerr << "\033[33m" << b->getName() << " was not able to execute the Form " << c->getName() << ": " << e.what() << "\033[0m" << std::endl;
	// 	}
	// 	std::cout << std::endl;

	// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	// 	delete a;
	// 	delete b;
	// 	delete c;
	// 	std::cout << std::endl;
	// }
	std::cout << "--------------------------------------------------------------------------------------------------------------" << std::endl;
	{
		std::cout << std::endl;

		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("Emperor", 1);
		Intern *z = new Intern();
		AForm *b = z->makeForm("robotomy request", "Bender");
		AForm *c = z->makeForm("shrubbery creation", "Cristmas");
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

		for (int i= 0; i < 5; i++) {
			a->executeForm(*b);
			a->executeForm(*c);
		}
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		delete b;
		delete c;
		delete z;
		std::cout << std::endl;
	}
	return (0);
}