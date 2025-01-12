/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:09:24 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/12 02:17:16 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{   
public:
    PhoneBook(void);
    ~PhoneBook(void);
    
    void	newContact(void);
    void	addContact(Contact contact, std::string first, std::string last, std::string nick, std::string phone, std::string secret);
    void	showContact(void);
    void	showList(void);
private:
    Contact contacts[8];
    int     index;
    int     valid;
};

#endif
