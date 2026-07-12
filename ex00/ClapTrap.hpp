/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 16:22:25 by hcissoko          #+#    #+#             */
/*   Updated: 2026/07/12 12:40:18 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
class ClapTrap
{
    private:
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