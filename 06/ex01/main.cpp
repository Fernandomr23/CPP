/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:05:21 by fmorenil          #+#    #+#             */
/*   Updated: 2025/03/19 13:17:52 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main(void)
{
	Data		*first = new Data();
	Data		*final;
	uintptr_t	value;
			
	first->id = 0;
	first->name = "Amancio";
	
	std::cout << "First: " << first << std::endl;
	std::cout << "ID: " << first->id << std::endl;
	std::cout << "Name: " << first->name << std::endl;
	
	value = Serializer::serialize(first);

	std::cout << "Value: " << value << std::endl;

	final = Serializer::deserialize(value);
	
	std::cout << "Final: " << final << std::endl;
	std::cout << "ID: " << final->id << std::endl;
	std::cout << "Name: " << final->name << std::endl;
	
	delete(first);
	return (0);
}