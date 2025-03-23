/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:47:10 by fernando          #+#    #+#             */
/*   Updated: 2025/03/23 18:07:59 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array {
	private:
		T 				*array;
		unsigned int	_size;
		
	public:
		Array(void) {
			array = NULL;
			_size = 0;
		}
		
		Array(unsigned int n) : _size(n) {
			array = new T[n]();
		}
		
		Array(const Array &other) : _size(other._size) {
			array = new T[_size]();
			for (unsigned int i = 0; i < _size; i++) {
				this->array[i] = other.array[i];
			}
		}
		
		~Array(void) {
			delete[] array;
		}
		
		Array&	operator=(const Array &other) {
			if (this != &other) {
				delete[] array;
				_size = other._size;
				array = new T[_size]();
				for (unsigned int i = 0; i < _size; i++) {
					this->array[i] = other.array[i];
				}
			}
			return (*this);
		}
		
		T&	operator[](unsigned int index) {
			if (index < _size)
				return (this->array[index]);
			else
				throw std::out_of_range("Index out of range");
		}

		unsigned int	size(void) const {
			return (this->_size);
		}
};
