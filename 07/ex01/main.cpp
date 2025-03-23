/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:52:13 by fernando          #+#    #+#             */
/*   Updated: 2025/03/23 15:45:46 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	printElement(T item)
{
	std::cout << "Item: " << item << std::endl;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	// std::string arr[] = {"1, 2, 3, 4, 5", "patata", "Emilio"};
	// bool arr[] = {true, false, 1, 0};
	size_t len = sizeof(arr) / sizeof(arr[0]);

	iter(arr, len, printElement<int>);

	return 0;
}