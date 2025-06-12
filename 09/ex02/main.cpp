/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:56:49 by fmorenil          #+#    #+#             */
/*   Updated: 2025/06/12 18:49:19 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2) {
        std::cerr << "./PmergeMe \"1 2 3 4 5\"" << std::endl;
        return (1);
    }
    PmergeMe pmergeMe(argv);

    std::cout << "Before:  ";
    pmergeMe.printDeque();
    // pmergeMe.printList();

    pmergeMe.sortDeque();
    // pmergeMe.sortList();
    
    std::cout << "After:   ";
    pmergeMe.printDeque();

    // pmergeMe.printTimes();
    return (0);
}