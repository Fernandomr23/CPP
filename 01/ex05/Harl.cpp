/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:29:58 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/17 19:05:24 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level) {
	std::string levels[] = {"DEBUG", "ERROR", "INFO", "WARNING"};
	void (Harl::*harlPtr[])() = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
	
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*harlPtr[i])();
			return ;
		}
	}
	std::cout << "Invalid level" << std::endl;
}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}