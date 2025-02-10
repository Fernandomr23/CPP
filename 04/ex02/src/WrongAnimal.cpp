/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:37:37 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/05 11:46:57 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal(void) : _type("noType") {
	std::cout << "WrongAnimal " << this->_type << " created with default constructor." << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type) : _type(type) {
	std::cout << "WrongAnimal " << this->_type << " created." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &other) {
	*this = operator=(other);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal " << this->_type << " destroyed." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
	this->_type = other.getType();
	return (*this);
}

std::string const &WrongAnimal::getType(void) const {
	return (this->_type);
}

void	WrongAnimal::setType(std::string const &type) {
	this->_type = type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal " << this->_type << " made a sound!" << std::endl;
}
