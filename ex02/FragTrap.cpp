/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 04:09:51 by hcissoko          #+#    #+#             */
/*   Updated: 2026/07/15 04:14:01 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->name_ << " destroyed" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->name_ = name;
    this->hit_points_ = 100;
    this->energy_points_ = 100;
    this->attack_damage_ = 30;
    std::cout << "FragTrap " << this->name_ << " created ";
    std::cout << "hit points = " << this->hit_points_ << " energy points = " << this->energy_points_ << " attack damage = " << this->attack_damage_ << std::endl;
}

FragTrap::FragTrap() : ClapTrap() {
    this->name_ = "No Name";
    this->hit_points_ = 100;
    this->energy_points_ = 100;
    this->attack_damage_ = 30;   
    std::cout << "Default FragTrap created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
    *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
    }
    return *this;
}


void    FragTrap::attack(const std::string& target)
{
    if (this->energy_points_ < 1 || this->hit_points_ < 1)
    {
        std::cout << "FragTrap " << this->name_ << " has no ";
        if (this->energy_points_ < 1)
            std::cout << "energy";
        else
            std::cout << "hit";
        std::cout << " points left to attack." << std::endl;
        return;
    }
    this->energy_points_--;
    std::cout << "FragTrap " << this->name_ << " attacks " << target << " causing " << this->attack_damage_ << " points of damage!" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name_ << " wants to high five!" << std::endl;
}