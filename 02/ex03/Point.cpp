/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:07:23 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/23 11:27:29 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(Fixed()), y(Fixed()) {}

Point::~Point(void) {
	std::cout << "Point Destructor called" << std::endl;
}

Point::Point(const float a, const float b) : x(Fixed(a)), y(Fixed(b)) {}

Point::Point(const Point& otherPoint) : x(otherPoint.x), y(otherPoint.y) {}