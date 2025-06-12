/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:56:49 by fmorenil          #+#    #+#             */
/*   Updated: 2025/06/11 18:34:17 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    PmergeMe pmergeMe("1 2 3 5");
    (void)argc; // To avoid unused parameter warning
    (void)argv; // To avoid unused parameter warning
    pmergeMe.printContainers();

    return (0);
}