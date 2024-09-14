/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:25:28 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/14 23:25:29 by ismherna         ###   ########.fr       */
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
	
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref)
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	*this = ref;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout	<< "My DiamondTrap name is " << _name
				<< " and my ClapTrap name is " << ClapTrap::_name
				<< std::endl;
}