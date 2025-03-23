/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:52:13 by fernando          #+#    #+#             */
/*   Updated: 2025/03/23 18:21:45 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    try {
        Array<int> arr(5);
		
        for (unsigned int i = 0; i < arr.size(); i++)
            arr[i] = i * 2;

        for (unsigned int i = 0; i < arr.size(); i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;

		std::cout << "Size: " << arr.size() << std::endl;
        Array<int> arrCopy = arr;
        arrCopy[0] = 100;
        std::cout << "arr[0]: " << arr[0] << ", arrCopy[0]: " << arrCopy[0] << std::endl;

        std::cout << arr[10]; // Prueba excepción
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}