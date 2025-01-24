/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:44:45 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/24 16:54:53 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
public:
	Fixed const	&getPointX(void) const;
	Fixed const	&getPointY(void) const;
	Point(void);
	Point(const float a, const float b);
	Point(const Point& otherPoint);
	Point& operator=(const Point& otherPoint);
	~Point(void);
	
private:
	const Fixed x;
	const Fixed y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
