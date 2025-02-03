/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:44:57 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/30 19:51:49 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	this->_type = "Cat";
}

Cat::~Cat(void) {}

Cat::Cat(std::string type) : Animal("Cat") {
	this->_type = "Cat";
}

Cat::Cat(const Cat &other) {
	*this = operator=(other);
}

Cat& Cat::operator=(const Cat &other) {
	this->_type = other._type;
	return (*this);
}

void Cat::makeSound(void) {
	std::cout << "Miau Miau Miau" << std::endl;
}