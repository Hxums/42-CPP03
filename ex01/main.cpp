/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:31:55 by hcissoko          #+#    #+#             */
/*   Updated: 2026/07/10 17:49:36 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap("John");
    claptrap.attack("Target");
    claptrap.takeDamage(10);
    claptrap.beRepaired(10);
    return 0;
}