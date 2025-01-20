/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:32:10 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/17 18:35:48 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;
	
	if (argc != 2) {
		std::cout << "Example: " << argv[0] << " \"MODE\"" << std::endl;
		return (1);
	}
	harl.complain((std::string)argv[1]);
	return (0);
}