/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:58:19 by fernando          #+#    #+#             */
/*   Updated: 2025/03/05 14:37:25 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
    private:
        std::string target;
        
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string _target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
		
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);
		
		const std::string		getTarget(void) const;

		void					execute(const Bureaucrat& executor) const;
		
};

std::ostream&	operator<<(std::ostream& os, const ShrubberyCreationForm& b);
