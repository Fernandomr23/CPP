/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:27:02 by fernando          #+#    #+#             */
/*   Updated: 2025/01/15 15:53:08 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class   HumanA {
    
public:
    void   attack(void);
    HumanA(std::string n, Weapon &w);    
    ~HumanA(void);
        
private:
    std::string name;
    Weapon     &weapon;
};

#endif
