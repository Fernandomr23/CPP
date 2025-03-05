/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:28:53 by fernando          #+#    #+#             */
/*   Updated: 2025/03/05 17:10:06 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

class Intern
{
    private:

		AForm*	makePresidential(std::string formTarget);
		AForm*	makeRobotomy(std::string formTarget);
		AForm*	makeShrubbery(std::string formTarget);
    public:
        Intern(void);
        Intern(const Intern& other);
        ~Intern(void);

        Intern&	operator=(const Intern& other);

		AForm*	makeForm(std::string formName, std::string formTarget);

		class	IncorrectFormNameException : public std::exception {
			public:
				virtual const char* what() const throw();	
		};
};
