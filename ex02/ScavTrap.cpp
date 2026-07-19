/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:57:30 by hcissoko          #+#    #+#             */
/*   Updated: 2026/07/14 19:00:03 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(void)
{
    std::cout << "Scavtrap " << this->name_ << " destroyed" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->name_ = name;
    this->hit_points_ = 100;
    this->energy_points_ = 50;
    this->attack_damage_ = 20;
    std::cout << "Scavtrap " << this->name_ << " created ";
    std::cout << "hit points = " << this->hit_points_ << " energy points = " << this->energy_points_ << " attack damage = " << this->attack_damage_ << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap() {
    this->name_ = "No Name";
    this->hit_points_ = 100;
    this->energy_points_ = 50;
    this->attack_damage_ = 20;   
    std::cout << "Default Scavtrap created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
    *this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
    }
    return *this;
}


void    ScavTrap::attack(const std::string& target)
{
    if (this->energy_points_ < 1 || this->hit_points_ < 1)
    {
        std::cout << "ScavTrap " << this->name_ << " has no ";
        if (this->energy_points_ < 1)
            std::cout << "energy";
        else
            std::cout << "hit";
        std::cout << " points left to attack." << std::endl;
        return;
    }
    this->energy_points_--;
    std::cout << "ScavTrap " << this->name_ << " attacks " << target << " causing " << this->attack_damage_ << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->name_ << " is guarding the gate." << std::endl;
}