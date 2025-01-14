/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:58:46 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/14 17:02:16 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	int i;
	
	if (N <= 0)
		return (NULL);
	Zombie	*horde = new Zombie[N];
	i = 0;
	while (i < N)
		horde[i++].setName(name);	
	return (horde);
}