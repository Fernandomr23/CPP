/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:18:29 by fernando          #+#    #+#             */
/*   Updated: 2025/03/05 14:59:57 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery Form", 145, 137) {
    std::cout << "Default ShrubberyCreationForm constructor called." << std::endl;
    this->target = "No target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : AForm("Shrubbery Form", 145, 137) {
    std::cout << "Target ShrubberyCreationForm constructor called." << std::endl;
    this->target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm("Shrubbery Form", 145, 137) {
    std::cout << "Other ShrubberyCreationForm constructor called." << std::endl;
    this->target = other.target;
}


ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}


ShrubberyCreationForm&    ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this == &other) {
        return (*this);
    }
    this->target = other.target;
    
    return (*this);
}


const std::string   ShrubberyCreationForm::getTarget(void) const {
    return (this->target);
}

void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (this->getIsSigned()) {
        if (this->getExecGrade() >= executor.getGrade()) {
            std::ofstream outfile(this->target + "_shrubbery");
            
            outfile << "                                                         .\n"
            << "                                              .         ;  \n"
            << "                 .              .              ;%     ;;   \n"
            << "                   ,           ,                :;%  %;   \n"
            << "                    :         ;                   :;%;'     .,   \n"
            << "           ,.        %;     %;            ;        %;'    ,;\n"
            << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
            << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
            << "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
            << "                `%;.     ;%;     %;'         `;%%;.%;'\n"
            << "                 `:;%.    ;%%. %@;        %; ;@%;'%\n"
            << "                    `:%;.  :;bd%;          %;@%;'\n"
            << "                      `@%:.  :;%.         ;@@%;'   \n"
            << "                        `@%.  `;@%.      ;@@%;         \n"
            << "                          `@%%. `@%%    ;@@%;        \n"
            << "                            ;@%. :@%%  %@@%;       \n"
            << "                              %@bd%%%bd%%:;     \n"
            << "                                #@%%%%%:;;\n"
            << "                                %@@%%%::;\n"
            << "                                %@@@%(o);  . '         \n"
            << "                                %@@@o%;:(.,'         \n"
            << "                            `.. %@@@o%::;         \n"
            << "                               `)@@@o%::;         \n"
            << "                                %@@(o)::;        \n"
            << "                               .%@@@@%::;         \n"
            << "                               ;%@@@@%::;.          \n"
            << "                              ;%@@@@%%:;;;. \n"
            << "                          ...;%@@@@@%%:;;;;,.."
            << std::endl;

            outfile.close();
            std::cout << "File " << this->target + "_shrubbery" << " created." << std::endl;
        } else {
            throw GradeTooLowException();
        }
    } else {
        throw FormNotSignedException();
    }
}

std::ostream&   operator<<(std::ostream& os, const ShrubberyCreationForm& b) {
    os << b.getName() << " with Grades [" 
    << b.getSignGrade() << ", " << b.getExecGrade() 
    << "] target: " << b.getTarget() 
    << ". Signed: " << b.getIsSigned();

    return (os);
}
