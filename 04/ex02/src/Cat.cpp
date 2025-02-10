/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:44:57 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/10 12:20:30 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat created with default constructor." << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat(void) {
	std::cout << "Cat object destroyed." << std::endl;
	delete this->brain;
}

Cat::Cat(std::string type) : Animal("Cat") {
	std::cout << "Cat created with type constructor." << std::endl;
	this->_type = type;
	this->brain = new Brain();
}

Cat::Cat(const Cat &other) {
	this->_type = other._type;
	this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat &other) {
	if (this != &other) {
		Animal::operator=(other);
		delete this->brain;	
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Woof Woof Woof" << std::endl;
}