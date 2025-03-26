/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:52:13 by fernando          #+#    #+#             */
/*   Updated: 2025/03/26 16:45:33 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> vec;
	int value = 6;
		
	vec.push_back(1);
	vec.push_back(6);
	vec.push_back(14);
	vec.push_back(78);

	try
	{
    	int index = easyfind(vec, value);
        std::cout << "Value (" << value << ") found at index: " << index << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

    return 0;
}