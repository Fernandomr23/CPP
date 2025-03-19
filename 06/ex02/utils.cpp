/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:39:36 by fernando          #+#    #+#             */
/*   Updated: 2025/03/19 16:12:28 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Childs.hpp"

Base*	generate(void)
{
	int random = rand() % 6;
	
	if (random == 0 || random == 1) {
		std::cout << "New instance of A" << std::endl;
		return (new A());
	}
	else if (random == 2 || random == 3) {
		std::cout << "New instance of B" << std::endl;
		return (new B());
	}
	else {
		std::cout << "New instance of C" << std::endl;
		return (new C());
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "[P] - Object type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "[P] - Object type: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "[P] - Object type: C" << std::endl;
	else
		std::cout << "[P] - Invalid pointer" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A&	a = dynamic_cast<A&>(p);
		std::cout << "[R] - Object type: A" << std::endl;
		(void)a;
		return ;
	}
	catch(std::bad_cast& e) {}

	try
	{
		B&	b = dynamic_cast<B&>(p);
		std::cout << "[R] - Object type: B" << std::endl;
		(void)b;
		return ;
	}
	catch(std::bad_cast& e) {}
	
	try
	{
		C&	c = dynamic_cast<C&>(p);
		std::cout << "[R] - Object type: C" << std::endl;
		(void)c;
		return ;
	}
	catch(std::bad_cast& e) {}
	std::cout << "[R] - Invalid pointer" << std::endl;

}