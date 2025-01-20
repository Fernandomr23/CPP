/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:50:15 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/20 13:15:28 by fmorenil         ###   ########.fr       */
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
	float	toInt(void) const;
	Fixed();
	Fixed(const Fixed& num);
	Fixed(const int num);
	Fixed(const float num);
	Fixed& operator=(const Fixed& num);
	Fixed& operator<<(const Fixed& num);
	~Fixed();
private:
	int	_value;
	static const int bits = 8;	
};