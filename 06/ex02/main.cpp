/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:05:21 by fmorenil          #+#    #+#             */
/*   Updated: 2025/03/19 16:14:52 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Childs.hpp"

int main(void)
{
	srand(time(0));
	Base	*test;
	
	std::cout << std::endl << "----------Pointer-----------" << std::endl << std::endl;

	for (int i = 0; i < 5; i++) {
		test = generate();
		identify(test);
		identify(*test);
		delete(test);
	}

	return (0);
}