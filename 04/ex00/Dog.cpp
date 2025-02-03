/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:44:57 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/30 19:50:56 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	this->_type = "Dog";
}

Dog::~Dog(void) {}

Dog::Dog(std::string type) : Animal("Dog") {
	this->_type = "Dog";
}

Dog::Dog(const Dog &other) {
	*this = operator=(other);
}

Dog& Dog::operator=(const Dog &other) {
	this->_type = other._type;
	return (*this);
}

void Dog::makeSound(void) {
	std::cout << "Woof Woof Woof" << std::endl;
}