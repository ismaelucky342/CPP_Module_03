/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:25:28 by ismherna          #+#    #+#             */
/*   Updated: 2025/05/07 17:11:46 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
	
	std::cout << WHITE "DiamondTrap: Default constructor called" RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref)
{
	std::cout << GREEN "DiamondTrap: Copy constructor called" RESET << std::endl;
	*this = ref;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED "DiamondTrap: Destructor called" RESET<< std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout	<< CYAN "My DiamondTrap name is " << _name
				<< " and my ClapTrap name is " RESET << ClapTrap::_name
				<< std::endl;
}