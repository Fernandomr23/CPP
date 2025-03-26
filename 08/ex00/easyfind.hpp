/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:47:10 by fernando          #+#    #+#             */
/*   Updated: 2025/03/26 16:44:10 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
int	easyfind(T &a, int check)
{
	int len = a.size();
	for (int i = 0; i < len; i++) {
		if (a[i] == check)
			return (i);		
	}
	throw std::runtime_error("Value not found"); 
}
