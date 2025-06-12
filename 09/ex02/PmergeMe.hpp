/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 09:55:57 by fmorenil          #+#    #+#             */
/*   Updated: 2025/06/11 18:30:17 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <list>
#include <sstream>
#include <algorithm>

class PmergeMe
{
    private:
        std::deque<int>		deque;
        std::list<int>		list;
    
    public:
        PmergeMe(const std::string &input);
        ~PmergeMe();
        PmergeMe(const PmergeMe &other);

        PmergeMe &operator=(const PmergeMe &other);

		void	createContainers(const std::string &input);
		void	sortList();
		void	sortDeque();
		void	printContainers();

        class invalidNumberException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};
