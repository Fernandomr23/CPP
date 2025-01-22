/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:57:05 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/22 11:14:38 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& num) {
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(num);
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = num << bits; 
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)roundf(num * (1 << bits)); 
}

float	Fixed::toFloat(void) const {
	return ((float)this->_value / (1 << bits));
}

int	Fixed::toInt(void) const {
	return (this->_value >> bits);
}

int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed& Fixed::operator=(const Fixed& num) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &num)
		return (*this);
	this->_value = num.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& num) {
	os << num.toFloat();
	return (os);
}
