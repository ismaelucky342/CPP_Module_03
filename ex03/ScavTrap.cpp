/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:16:21 by ismherna          #+#    #+#             */
/*   Updated: 2025/05/07 17:13:08 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "undefined";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << WHITE "ScavTrap: Empty constructor called" RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << BLUE "ScavTrap: Default constructor called" RESET << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	std::cout << GREEN "ScavTrap: Copy constructor called" RESET << std::endl;
	*this = ref;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
	std::cout << CYAN "ScavTrap: Copy assignment operator called" RESET << std::endl;
	if (this != &ref)
	{
		_name = ref._name;
		_hitPoints = ref._hitPoints;
		_energyPoints = ref._energyPoints;
		_attackDamage = ref._attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << RED "ScavTrap: Destructor called"  RESET << std::endl;
}


void	ScavTrap::attack(const std::string &target)
{
	if (_energyPoints == 0)
	{
		std::cout	<< RED "ScavTrap " << _name
					<< " cannot attack!" RESET 
					<< std::endl;
	}
	else if (_energyPoints >= 1)
	{
		std::cout	<< BRIGHT_RED "ScavTrap " << _name
					<< " attacks " << target
					<< ", causing " << _attackDamage
					<< " points of damage!" RESET 
					<< std::endl;
		_energyPoints -= 1;
	}
}

void	ScavTrap::guardGate()
{
	std::cout	<< YELLOW "ScavTrap " << _name
				<< " is now in Gate keeper mode." RESET 
				<< std::endl;
}