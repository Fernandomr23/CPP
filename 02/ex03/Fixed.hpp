/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:50:15 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/22 18:33:10 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class	Fixed
{
public:
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	
	Fixed();
	Fixed(const Fixed& num);
	Fixed(const int num);
	Fixed(const float num);
	
	Fixed& operator=(const Fixed& num);
	bool operator>(const Fixed& num) const;
	bool operator<(const Fixed& num) const;
	bool operator>=(const Fixed& num) const;
	bool operator<=(const Fixed& num) const;
	bool operator==(const Fixed& num) const;
	bool operator!=(const Fixed& num) const;
	
	float operator+(const Fixed& num) const;
	float operator-(const Fixed& num) const;
	float operator*(const Fixed& num) const;
	float operator/(const Fixed& num) const;

	Fixed& operator++(void);
	Fixed& operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);
	
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static const Fixed&	min(Fixed& a, Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
	static const Fixed&	max(Fixed& a, Fixed& b);
	~Fixed();
private:
	int	_value;
	static const int bits = 8;	
};

std::ostream& operator<<(std::ostream& os, const Fixed& num);
