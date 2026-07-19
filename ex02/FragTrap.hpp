/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 04:09:54 by hcissoko          #+#    #+#             */
/*   Updated: 2026/07/15 04:11:47 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    private:
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& src);
        FragTrap&   operator=(const FragTrap& rhs);
        void        attack(const std::string& target);
        ~FragTrap(void);
    void    highFivesGuys(void);
};

#endif