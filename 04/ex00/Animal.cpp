/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:37:37 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/30 19:58:01 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("noType") {}

Animal::~Animal(void) {}

Animal::Animal(std::string type) : _type(type) {}

Animal::Animal(Animal &other) {
	*this = operator=(other);
}

Animal& Animal::operator=(Animal &other) {
	this->_type = other._type;
	return (*this);
}

std::string Animal::getType(void) {
	return (this->_type);
}

void	Animal::makeSound(void) {
	std::cout << "Animal make sound" << std::endl;
}
