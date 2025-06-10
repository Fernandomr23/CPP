/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 09:55:57 by fmorenil          #+#    #+#             */
/*   Updated: 2025/06/02 10:04:21 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <list>
#include <algorithm>

class PmergeMe
{
    private:
        std::deque<int>   deque;
        std::list<int>   list;
    
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &other);

        PmergeMe &operator=(const PmergeMe &other);
        
};
