/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:01:07 by fmorenil          #+#    #+#             */
/*   Updated: 2025/03/26 18:01:08 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {
	this->limit  = 5;
	this->size = 0;
}

Span::Span(unsigned int _limit) {
	this->limit  = _limit;
	this->size = 0;
}

Span::Span(const Span& other) {
	this->operator=(other);
}

Span& Span::operator=(const Span& other) {
	if (this == &other)
		return (*this);
	this->limit = other.limit;
	this->size = other.size;
	this->array = other.array;

	return (*this);
}

Span::~Span(void) {}

void	Span::addNumber(int num)
{
	if (this->size < limit) {
		this->array.push_back(num);
		this->size++;	
	}
	else
		throw std::out_of_range("Limit reached");
}

int	Span::shortestSpan(void)
{
	if (this->size < 2)
		throw std::out_of_range("Not enough numbers");
		
	std::vector<int> sorted = this->array;
	std::sort(sorted.begin(), sorted.end());
	
	int	min = MAX_INT;
	for (size_t i = 1; i < sorted.size(); i++)
	{
		int diff = sorted[i] - sorted[i - 1];
		if (min > diff)
			min = diff;
	}
	return (min);
}

int	Span::longestSpan(void)
{
	if (this->size < 2)
		throw std::out_of_range("Not enough numbers");
		
	std::vector<int> sorted = this->array;
	std::sort(sorted.begin(), sorted.end());
	
	int	max = sorted[sorted.size() - 1] - sorted[0];
	
	return (max);
}