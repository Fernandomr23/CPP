/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:05:14 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/25 16:33:10 by fmorenil         ###   ########.fr       */
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
		const int			getGrade(void);
		
		void				increaseBureaucrat(void);
		void				decreaseBureaucrat(void);
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b);