/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:30:17 by fernando          #+#    #+#             */
/*   Updated: 2025/01/15 16:02:08 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class   HumanB {
    
public:
    void   attack(void);
    void   setWeapon(Weapon &w);
    HumanB(std::string name);    
    ~HumanB(void);
        
private:
    std::string name;
    Weapon     *weapon;
};

#endif
