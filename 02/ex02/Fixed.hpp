/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:50:15 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/22 11:44:27 by fernando         ###   ########.fr       */
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
	bool operator>(const Fixed& num);
	bool operator<(const Fixed& num);
	bool operator>=(const Fixed& num);
	bool operator<=(const Fixed& num);
	bool operator==(const Fixed& num);
	bool operator!=(const Fixed& num);
	~Fixed();
private:
	int	_value;
	static const int bits = 8;	
};

std::ostream& operator<<(std::ostream& os, const Fixed& num);
