/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:35:32 by ismherna          #+#    #+#             */
/*   Updated: 2025/05/07 16:53:55 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	_name(""), _hitPoints(10), _maxHitPoints(10), _energyPoints(10), _maxEnergyPoints(10), _attackDamage(0)
{
	std::cout << GREEN "Claptrap Default constructor called" RESET << std::endl;
}


ClapTrap::ClapTrap(std::string name):
	_name(name), _hitPoints(10), _maxHitPoints(10), _energyPoints(10), _maxEnergyPoints(10), _attackDamage(0)
{
	std::cout << BLUE "ClapTrap first Param constructor called" RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) :
	_name(name), _hitPoints(hitPoints), _maxHitPoints(hitPoints), _energyPoints(energyPoints), _maxEnergyPoints(energyPoints), _attackDamage(attackDamage)
{
	std::cout << CYAN "ClapTrap Second Param constructor called" RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED "ClapTrap Destructor called" RESET	 << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& cl)
{
	std::cout << MAGENTA "ClapTrap Copy constructor called" RESET << std::endl;
	operator=(cl);
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& cl)
{
	std::cout << YELLOW "ClapTrap Operator = called" RESET << std::endl;
	_name = cl._name;
	_hitPoints = cl._hitPoints;
	_maxHitPoints = cl. _maxHitPoints;
	_energyPoints = cl._energyPoints;
	_maxEnergyPoints = cl._maxEnergyPoints;
	_attackDamage = cl._attackDamage;
	return (*this);
}

void		ClapTrap::display(std::ostream& stream) const
{
	stream << BRIGHT_GREEN "ClapTrap " << _name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

std::ostream&	operator<<(std::ostream& stream, ClapTrap const& cl)
{
	cl.display(stream);
	return (stream);
}

void 		ClapTrap::attack(std::string const& target)
{
	if (_energyPoints >= 5)
	{
		std::cout << RED "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! " RESET << std::endl;
		_energyPoints -= 5;
	}
	else
		std::cout << BRIGHT_RED "Not enough enery points" RESET << std::endl;
}

void 		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << BRIGHT_GREEN "ClapTrap " << _name << " takes " << amount << " damage." RESET << std::endl;
	if (amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;

	if (_hitPoints == 0)
		std::cout << _name << BRIGHT_RED " is dead." RESET << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << BRIGHT_GREEN "ClapTrap " << _name << " is repaired by " << amount << " points." RESET << std::endl;

	if (_hitPoints + amount > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else
		_hitPoints += amount;

	if (_energyPoints + amount > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	else
		_energyPoints += amount;
}
