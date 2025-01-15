/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:22:05 by fernando          #+#    #+#             */
/*   Updated: 2025/01/15 16:02:58 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class   Weapon {
    
public:
    const std::string&	getType(void);
    void   				setType(std::string str);
    Weapon(std::string str = "No Weapon");    
    ~Weapon(void);
        
private:
    std::string type;
};

#endif
