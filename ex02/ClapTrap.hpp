/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 16:22:25 by hcissoko          #+#    #+#             */
/*   Updated: 2026/07/14 18:53:27 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
    protected:
        std::string name_;
        int         hit_points_;
        int         energy_points_;
        int         attack_damage_;
    public:
        ClapTrap(std::string name);
        ClapTrap(void);
        ClapTrap(const ClapTrap& src);
        ClapTrap& operator=(const ClapTrap& rhs);
        ~ClapTrap(void);
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif