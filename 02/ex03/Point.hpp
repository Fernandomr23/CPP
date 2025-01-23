/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:44:45 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/23 11:25:39 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
public:
	Point(void);
	Point(const float a, const float b);
	Point(const Point& otherPoint) = delete;
	Point& operator=(const Point& otherPoint);
	~Point(void);
	
private:
	const Fixed x;
	const Fixed y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
