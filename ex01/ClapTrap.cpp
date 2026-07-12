/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 16:40:23 by hcissoko          #+#    #+#             */
/*   Updated: 2026/07/10 17:48:58 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name_ = name;
    this->hit_points_ = 10;
    this->energy_points_ = 10;
    this->attack_damage_ = 0;
    std::cout << "Claptrap " << this->name_ << " created" << std::endl;

}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Claptrap " << this->name_ << " destroyed" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->energy_points_ < 1 || this->hit_points_ < 1)
    {
        std::cout << "ClapTrap " << this->name_ << " has no ";
        if (this->energy_points_ < 1)
            std::cout << "energy";
        else
            std::cout << "hit";
        std::cout << " points left to attack." << std::endl;
        return;
    }
    this->energy_points_--;
    std::cout << "ClapTrap " << this->name_ << " attacks " << target << " causing " << this->attack_damage_ << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (amount < 1)
    {
        std::cout << "Invalid damage amount (" << amount << ")" << std::endl;
        return;
    }
    this->hit_points_ -= amount;
    std::cout << "ClapTrap " << this->name_ << " took " << amount << " points of damage. Hit points: " << this->hit_points_ << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (amount < 1)
    {
        std::cout << "Invalid repair amount (" << amount << ")" << std::endl;
        return;
    }
     if (this->energy_points_ < 1 || this->hit_points_ < 1)
    {
        std::cout << "ClapTrap " << this->name_ << " has no ";
        if (this->energy_points_ < 1)
            std::cout << "energy";
        else
            std::cout << "hit";
        std::cout << " points left to be repaired." << std::endl;
        return;
    }
    this->hit_points_ += amount;
    this->energy_points_--;
    std::cout << "ClapTrap " << this->name_ << " repaired for " << amount << " points. Hit points: " << this->hit_points_ << std::endl;
}