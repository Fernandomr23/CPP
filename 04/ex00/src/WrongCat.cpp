/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:44:57 by fmorenil          #+#    #+#             */
/*   Updated: 2025/02/05 11:47:02 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	this->_type = "WrongCat";
}

WrongCat::~WrongCat(void) {}

WrongCat::WrongCat(std::string type) : WrongAnimal("WrongCat") {
	this->_type = type;
}

WrongCat::WrongCat(const WrongCat &other) {
	*this = operator=(other);
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
	this->_type = other._type;
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "Miau Miau Miau" << std::endl;
}