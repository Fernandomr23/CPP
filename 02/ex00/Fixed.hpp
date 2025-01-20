/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:50:15 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/20 12:38:29 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Fixed
{
public:
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed();
	Fixed(const Fixed& num);
	Fixed& operator=(const Fixed& num);
	~Fixed();
private:
	int	_value;
	static const int bits = 8;	
};