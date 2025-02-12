/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 09:55:54 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/12 10:11:41 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure() : AMateria("cure") {
	// std::cout << "Cure Default Constructor called." << std::endl;
	this->_type = "cure";
}

Cure::Cure(Cure& other) {
	*this = other;
}

Cure::~Cure() {
	// std::cout << "Cure Destructor called." << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
	this->_type = other._type;
	return (*this);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" <<std::endl;
}

AMateria*	Cure::clone() const {
	AMateria* other = new Cure();
	return (other);
}

std::string const	&Cure::getType(void) const {
	return (this->_type);
}