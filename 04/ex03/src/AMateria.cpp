/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 09:55:54 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/12 12:20:48 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria() {
	// std::cout << "AMateria Default Constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
	// std::cout << "AMateria type Constructor called." << std::endl;
}

AMateria::AMateria(const AMateria& other) {
	*this = other;
}

AMateria::~AMateria() {
	// std::cout << "AMateria Destructor called." << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other) {
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

std::string const	&AMateria::getType(void) const {
	return (this->_type);
}

void	AMateria::use(ICharacter& target) {
	std::cout << "* undefined action at " << target.getName() << " *" << std::endl;
}
