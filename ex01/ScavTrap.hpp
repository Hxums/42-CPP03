/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:57:26 by hcissoko          #+#    #+#             */
/*   Updated: 2026/07/10 19:39:29 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:
    public:
        ~ScavTrap(void);
        ScavTrap();
        ScavTrap(std::string name);
        void    guardGate(void);
};
