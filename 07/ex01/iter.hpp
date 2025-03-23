/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:47:10 by fernando          #+#    #+#             */
/*   Updated: 2025/03/23 14:17:35 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename Func>
void	iter(T *a, size_t len, Func func) // array, len, f()
{
	for (size_t i = 0; i < len; i++) {
		func(a[i]);
	}
}
