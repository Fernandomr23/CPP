/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:37:37 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/05 11:46:17 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal(void) : _type("noType") {
	std::cout << "Animal " << this->_type << " created with default constructor." << std::endl;
}

Animal::Animal(std::string const &type) : _type(type) {
	std::cout << "Animal " << this->_type << " created." << std::endl;
}

Animal::Animal(Animal &other) {
	*this = operator=(other);
}

Animal::~Animal(void) {
	std::cout << "Animal " << this->_type << " destroyed." << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
	this->_type = other.getType();
	return (*this);
}

std::string const &Animal::getType(void) const {
	return (this->_type);
}

void	Animal::setType(std::string const &type) {
	this->_type = type;
}

void	Animal::makeSound(void) const {
	std::cout << "Animal " << this->_type << " made a sound!" << std::endl;
}
