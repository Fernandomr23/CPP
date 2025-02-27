/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:05:14 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/27 19:27:41 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;				
	public:
		Bureaucrat(void);
		Bureaucrat(int _grade);
		~Bureaucrat(void);

		const std::string	getName(void);
		int					getGrade(void);

		void				setName(const std::string _name);
		void				setGrade(int _grade);
		
		void				increaseBureaucrat(void);
		void				decreaseBureaucrat(void);

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