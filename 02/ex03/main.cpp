/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:56:07 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/24 16:29:04 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void) {
	std::cout << std::boolalpha;

	std::cout << "a(0, 0), b(0, 5), c(5, 0), point(1, 1): "
		<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(1, 1)) << std::endl;

	std::cout << "a(0, 0), b(0, 5), c(5, 0), point(0, 5): "
		<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(0, 5)) << std::endl;

	std::cout << "a(0, 0), b(0, 5), c(5, 0), point(0, 3): "
		<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(0, 3)) << std::endl;

	std::cout << "a(0, 0), b(0, 5), c(5, 0), point(0, 0): "
		<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(0, 0)) << std::endl;

	std::cout << "a(0, 0), b(0, 5), c(5, 0), point(0.1, 0.01): "
		<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(0.1f, 0.01f)) << std::endl;

	std::cout << "a(0, 0), b(0, 5), c(5, 0), point(10, 0.01): "
		<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(10, 0.01f)) << std::endl;

	std::cout << "a(0, 0), b(0, 5), c(5, 0), point(0, -0.01): "
		<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(0, -0.01f)) << std::endl;

	std::cout << "a(1, 1), b(4, 1), c(2.5, 4), point(2.5, 2): "
		<< bsp(Point(1, 1), Point(4, 1), Point(2.5f, 4), Point(2.5f, 2)) << std::endl;

	std::cout << "a(1, 1), b(4, 1), c(2.5, 4), point(3, 3): "
		<< bsp(Point(1, 1), Point(4, 1), Point(2.5f, 4), Point(3, 3)) << std::endl;

	std::cout << "a(1, 1), b(4, 1), c(2.5, 4), point(0, 0): "
		<< bsp(Point(1, 1), Point(4, 1), Point(2.5f, 4), Point(0, 0)) << std::endl;

	std::cout << "a(1, 1), b(4, 1), c(2.5, 4), point(1, 1): "
		<< bsp(Point(1, 1), Point(4, 1), Point(2.5f, 4), Point(1, 1)) << std::endl;

	std::cout << "a(0, 0), b(0, 5), c(5, 0), point(2.5, 2.5): "
		<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(2.5f, 2.5f)) << std::endl;

	std::cout << "a(0, 0), b(0, 5), c(5, 0), point(5, 5): "
		<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(5, 5)) << std::endl;

	std::cout << "a(0, 0), b(0, 5), c(5, 0), point(2.5, 0): "
		<< bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(2.5f, 0)) << std::endl;

	return 0;
}