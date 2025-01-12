/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:09:24 by fmorenil          #+#    #+#             */
/*   Updated: 2025/01/12 01:53:52 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
public:
    Contact(void);
    ~Contact(void);
	
    void 				setName(std::string firstName);
    void 				setLast(std::string lastName);
    void 				setNick(std::string nickname);
    void 				setPhone(std::string phoneNumber);
    void 				setSecret(std::string darkestSecret);
    const std::string	getName(void);
    const std::string	getLast(void);
    const std::string	getNick(void);
    const std::string	getPhone(void);
    const std::string	getSecret(void);
    
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
};

#endif
