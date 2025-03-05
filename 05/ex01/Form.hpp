/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:39:13 by fernando          #+#    #+#             */
/*   Updated: 2025/03/05 11:45:49 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   name;
        bool                isSigned;
        const int           signGrade;
        const int           signExec;
        
    public:
        Form(void);
        Form(const std::string _name);
        Form(int _signGrade, int _signExec);
        Form(const std::string _name, int _signGrade, int _signExec);
        Form(const Form& other);
        
        ~Form(void);

        Form&	operator=(const Form& other);
        
        const std::string	getName(void) const;
        bool	            getIsSigned(void) const;
        int					getSignGrade(void) const;
        int					getSignExec(void) const;

        void                beSigned(Bureaucrat& other);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
    };

std::ostream&	operator<<(std::ostream& os, const Form& b);