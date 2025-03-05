/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:18:29 by fernando          #+#    #+#             */
/*   Updated: 2025/03/05 14:10:26 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy Form", 72, 45) {
    std::cout << "Default RobotomyRequestForm constructor called." << std::endl;
    this->target = "No target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("Robotomy Form", 72, 45) {
    std::cout << "Target RobotomyRequestForm constructor called." << std::endl;
    this->target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm("Robotomy Form", 72, 45) {
    std::cout << "Other RobotomyRequestForm constructor called." << std::endl;
    this->target = other.target;
}


RobotomyRequestForm::~RobotomyRequestForm(void) {
    std::cout << "RobotomyRequestForm destructor called." << std::endl;
}


RobotomyRequestForm&    RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this == &other) {
        return (*this);
    }
    this->target = other.target;
    
    return (*this);
}


const std::string   RobotomyRequestForm::getTarget(void) const {
    return (this->target);
}

static int robotFailure = 0;

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (this->getIsSigned()) {
        if (this->getExecGrade() >= executor.getGrade()) {
            std::cout << "* BZZZZT... DRRRR... VRRRRRR... *" << std::endl;
            if (robotFailure % 2 == 0) {
                std::cout << this->getTarget() << " was robotomized" << std::endl;
            } else {
                std::cout << this->getTarget() << " Robotomy failed" << std::endl;
            }
            robotFailure++;
        } else {
            throw GradeTooLowException();
        }
    } else {
        throw FormNotSignedException();
    }
}

std::ostream&   operator<<(std::ostream& os, const RobotomyRequestForm& b) {
    os << b.getName() << " with Grades [" 
    << b.getSignGrade() << ", " << b.getExecGrade() 
    << "] target: " << b.getTarget() 
    << ". Signed: " << b.getIsSigned();

    return (os);
}
