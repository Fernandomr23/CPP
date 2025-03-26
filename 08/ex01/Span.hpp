/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:52:40 by fmorenil          #+#    #+#             */
/*   Updated: 2025/03/26 17:48:51 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

#define MAX_INT 2147483647

class Span
{
	private:
		unsigned int		limit;
		unsigned int		size;
		std::vector<int>	array;
		
	public:
		Span(void);
		Span(unsigned int _limit);
		Span(const Span& other);
		~Span(void);
		
		Span&	operator=(const Span& other);
		
		void	addNumber(int num);
		int		shortestSpan();	
		int		longestSpan();	
};
