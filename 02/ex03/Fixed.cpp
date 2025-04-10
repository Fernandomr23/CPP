/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:57:05 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/22 18:33:33 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& num) {
	// std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(num);
}

Fixed::Fixed(const int num) {
	// std::cout << "Int constructor called" << std::endl;
	this->_value = num << bits; 
}

Fixed::Fixed(const float num) {
	// std::cout << "Float constructor called" << std::endl;
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
	// std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed& Fixed::operator=(const Fixed& num) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &num)
		return (*this);
	this->_value = num.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed& num) const {
	return (this->toFloat() > num.toFloat());
}

bool	Fixed::operator<(const Fixed& num) const {
	return (this->toFloat() < num.toFloat());
}

bool	Fixed::operator>=(const Fixed& num) const {
	return (this->toFloat() >= num.toFloat());
}

bool	Fixed::operator<=(const Fixed& num) const {
	return (this->toFloat() <= num.toFloat());
}

bool	Fixed::operator==(const Fixed& num) const {
	return (this->toFloat() == num.toFloat());
}

bool	Fixed::operator!=(const Fixed& num) const {
	return (this->toFloat() != num.toFloat());
}

float	Fixed::operator+(const Fixed& num) const {
	return (this->toFloat() + num.toFloat());
}

float	Fixed::operator-(const Fixed& num) const {
	return (this->toFloat() - num.toFloat());
}

float	Fixed::operator*(const Fixed& num) const {
	return (this->toFloat() * num.toFloat());
}

float	Fixed::operator/(const Fixed& num) const {
	return (this->toFloat() / num.toFloat());
}

Fixed&	Fixed::operator++(void) {
	this->_value++;
	return (*this);
}

Fixed&	Fixed::operator--(void) {
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp;

	tmp._value = this->_value;
	this->_value++;
	return (tmp);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp;

	tmp._value = this->_value;
	this->_value--;
	return (tmp);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream& os, const Fixed& num) {
	os << num.toFloat();
	return (os);
}
