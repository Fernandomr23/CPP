/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:52:13 by fernando          #+#    #+#             */
/*   Updated: 2025/05/29 10:42:55 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	
	BitcoinExchange btc;

	// btc.printExchange();
	btc.calculateExchange(argv[1]);
	
    return (0);
}