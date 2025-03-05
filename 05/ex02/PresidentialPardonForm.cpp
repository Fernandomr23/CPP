/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:18:29 by fernando          #+#    #+#             */
/*   Updated: 2025/03/05 14:10:26 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential Form", 25, 5) {
    std::cout << "Default PresidentialPardonForm constructor called." << std::endl;
    this->target = "No target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("Presidential Form", 25, 5) {
    std::cout << "Target PresidentialPardonForm constructor called." << std::endl;
    this->target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm("Presidential Form", 25, 5) {
    std::cout << "Other PresidentialPardonForm constructor called." << std::endl;
    this->target = other.target;
}


PresidentialPardonForm::~PresidentialPardonForm(void) {
    std::cout << "PresidentialPardonForm destructor called." << std::endl;
}


PresidentialPardonForm&    PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this == &other) {
        return (*this);
    }
    this->target = other.target;
    
    return (*this);
}


const std::string   PresidentialPardonForm::getTarget(void) const {
    return (this->target);
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if (this->getIsSigned()) {
        if (this->getExecGrade() >= executor.getGrade()) {
            std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
        } else {
            throw GradeTooLowException();
        }
    } else {
        throw FormNotSignedException();
    }
}

std::ostream&   operator<<(std::ostream& os, const PresidentialPardonForm& b) {
    os << b.getName() << " with Grades [" 
    << b.getSignGrade() << ", " << b.getExecGrade() 
    << "] target: " << b.getTarget() 
    << ". Signed: " << b.getIsSigned();

    return (os);
}
