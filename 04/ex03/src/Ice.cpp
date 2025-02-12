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

#include <Ice.hpp>

Ice::Ice() : AMateria("ice") {
	// std::cout << "Ice Default Constructor called." << std::endl;
	this->_type = "ice";
}

Ice::Ice(Ice& other) {
	*this = other;
}

Ice::~Ice() {
	// std::cout << "Ice Destructor called." << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
	this->_type = other._type;
	return (*this);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}

AMateria*	Ice::clone() const {
	AMateria* other = new Ice();
	return (other);
}
