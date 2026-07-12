/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:57:30 by hcissoko          #+#    #+#             */
/*   Updated: 2026/07/10 19:40:16 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(void)
{
    
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->name_ = name;
    this->hit_points_ = 100;
    this->energy_points_ = 50;
    this->attack_damage_ = 20;
}
void    guardGate(void);