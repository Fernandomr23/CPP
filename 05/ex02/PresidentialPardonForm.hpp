/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:58:19 by fernando          #+#    #+#             */
/*   Updated: 2025/03/05 13:30:57 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string target;
        
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string _target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
		
		~PresidentialPardonForm(void);

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);
		
		const std::string		getTarget(void) const;

		void					execute(const Bureaucrat& executor) const;
		
};

std::ostream&	operator<<(std::ostream& os, const PresidentialPardonForm& b);
