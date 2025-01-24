/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:05:56 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/24 16:57:51 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// base x altura / 2

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	bool	sign[3];

	sign[0] = ((a.getPointX() - point.getPointX()) * (b.getPointY() - a.getPointY()) - (b.getPointX() - a.getPointX()) * (a.getPointY() - point.getPointY())) > 0;
	sign[1] = ((b.getPointX() - point.getPointX()) * (c.getPointY() - b.getPointY()) - (c.getPointX() - b.getPointX()) * (b.getPointY() - point.getPointY())) > 0;
	sign[2] = ((c.getPointX() - point.getPointX()) * (a.getPointY() - c.getPointY()) - (a.getPointX() - c.getPointX()) * (c.getPointY() - point.getPointY())) > 0;

	return sign[0] == sign[1] && sign[1] == sign[2];
}
