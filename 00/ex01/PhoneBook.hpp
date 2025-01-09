/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorenil <fmorenil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:09:24 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/09 18:22:18 by fmorenil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
    // Contact contacts[8];
    int     total_contacts;
    
public:
    PhoneBook(void);
    void	addContact(void);
    void	searchContacts(void);
    ~PhoneBook(void);
};

#endif