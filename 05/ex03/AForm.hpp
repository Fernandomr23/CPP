/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:39:13 by fernando          #+#    #+#             */
/*   Updated: 2025/03/05 12:53:53 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string   name;
        bool                isSigned;
        const int           signGrade;
        const int           execGrade;
        
    public:
        AForm(void);
        AForm(const std::string _name);
        AForm(int _signGrade, int _execGrade);
        AForm(const std::string _name, int _signGrade, int _execGrade);
        AForm(const AForm& other);
        
        virtual ~AForm(void);

        AForm&	operator=(const AForm& other);
        
        const std::string	getName(void) const;
        bool	            getIsSigned(void) const;
        int					getSignGrade(void) const;
        int					getExecGrade(void) const;

        void                beSigned(Bureaucrat& other);
        virtual void        execute(const Bureaucrat& executor) const = 0;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class FormNotSignedException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
    };

std::ostream&	operator<<(std::ostream& os, const AForm& b);