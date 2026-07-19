/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:31:55 by hcissoko          #+#    #+#             */
/*   Updated: 2026/07/15 04:06:57 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scavtrap("Jane");
    scavtrap.attack("Target");
    scavtrap.takeDamage(10);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();
    return 0;
}