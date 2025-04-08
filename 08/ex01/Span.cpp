/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:01:07 by fmorenil          #+#    #+#             */
/*   Updated: 2025/04/08 16:01:07 by fernando         ###   ########.fr       */
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
		throw Span::VectorIsFull();
}

int	Span::shortestSpan(void)
{
	if (this->size < 2)
		throw Span::VectorNotEnoughNumbers();
		
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
		throw Span::VectorNotEnoughNumbers();
		
	std::vector<int> sorted = this->array;
	std::sort(sorted.begin(), sorted.end());
	
	int	max = sorted[sorted.size() - 1] - sorted[0];
	
	return (max);
}

static int	randomInt(unsigned int size)
{
	int i = (rand() % size) + 1;
	return (i);
}

void	Span::fill(void)
{
	srand((unsigned)time(0));
	while (this->size < limit)
	{
		this->array.push_back(randomInt(this->limit * 2));
		// std::cout << this->array[this->size] << std::endl;
		this->size++;
	}
}