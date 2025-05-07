/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:13:43 by ismherna          #+#    #+#             */
/*   Updated: 2025/05/07 16:38:26 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "undefined";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;

	std::cout << WHITE "Empty constructor called" RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;

	std::cout << GREEN "Default constructor called" RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << BLUE "Copy constructor called" RESET << std::endl;
	*this = ref;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	std::cout << MAGENTA "Copy assignment operator called" RESET << std::endl;
	if (this != &ref)
	{
		_name = ref._name;
		_hitPoints = ref._hitPoints;
		_energyPoints = ref._energyPoints;
		_attackDamage = ref._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << YELLOW "Destructor called" RESET << std::endl;
}


void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints == 0)
	{
		std::cout	<< RED "ClapTrap " << _name
					<< " cannot attack!" RESET
					<< std::endl;
	}
	else if (_energyPoints >= 1)
	{
		std::cout	<< BRIGHT_GREEN "ClapTrap " << _name
					<< " attacks " << target
					<< ", causing " << _attackDamage
					<< " points of damage!" RESET
					<< std::endl;
		_energyPoints -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > (unsigned int)_hitPoints)
	{
		_hitPoints = 0;
		std::cout	<< "ClapTrap " << _name
					<< " ran out of hitpoints!"
					<< std::endl;
		return;
	}
	std::cout	<< BRIGHT_RED "ClapTrap " << _name
				<< " received " << amount
				<< " attack damage!" RESET
				<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout	<< "ClapTrap " << _name
					<< " cannot repair!"
					<< std::endl;
	}
	else if (_energyPoints >= 1)
	{
		_hitPoints += amount;
		_energyPoints -= 1;
		std::cout	<< BRIGHT_GREEN "ClapTrap " << _name
					<< " repaired " << amount
					<< " hit points (now has " << _hitPoints
					<< ") by using " << 1
					<< " energy point!" RESET
					<< std::endl;
	}
}