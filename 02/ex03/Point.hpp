/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:44:45 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/22 19:02:56 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
public:
	Point(void);
	Point(Fixed& const a, Fixed& const b);
	Point(Point& const otherPoint);
	Point operator=(Point& const otherPoint);
	~Point(void);
	
private:
	Fixed const x;
	Fixed const y;
};