/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:44:57 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/10 12:20:17 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog created with default constructor." << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog(void) {
	std::cout << "Dog object destroyed." << std::endl;
	delete this->brain;
}

Dog::Dog(std::string type) : Animal("Dog") {
	std::cout << "Dog created with type constructor." << std::endl;
	this->_type = type;
	this->brain = new Brain();
}

Dog::Dog(const Dog &other) {
	this->_type = other._type;
	this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog &other) {
	if (this != &other) {
		Animal::operator=(other);
		delete this->brain;	
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Woof Woof Woof" << std::endl;
}