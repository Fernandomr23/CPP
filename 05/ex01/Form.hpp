/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:39:13 by fernando          #+#    #+#             */
/*   Updated: 2025/03/02 00:47:40 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form
{
    private:
        const std::string   name;
        bool                isSigned;
        const int           signGrade;
        const int           signExec;
        
    public:
        Form(void);
        Form(const std::string name);
        Form(int _signGrade, int _signExec);
        Form(const std::string name, int _signGrade, int _signExec);
        Form(const Form& other);
        
        ~Form(void);

        Form&	operator=(const Form& other);
        
        const std::string	getName(void) const;
        int					getSignGrade(void) const;
        int					getSignExec(void) const;

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