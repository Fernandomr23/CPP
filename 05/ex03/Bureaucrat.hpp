/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:05:14 by fmorenil          #+#    #+#             */
/*   Updated: 2025/03/05 13:44:39 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;	
					
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string _name, int _grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat(void);

		Bureaucrat&	operator=(const Bureaucrat& other);
		const std::string	getName(void) const;
		int					getGrade(void) const;
		
		void				decreaseBureaucrat(void);
		void				increaseBureaucrat(void);
		
		void                signForm(AForm& form);
		void                executeForm(AForm const & form);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b);