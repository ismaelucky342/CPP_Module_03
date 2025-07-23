/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:34:56 by ismherna          #+#    #+#             */
/*   Updated: 2025/05/07 16:54:58 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
	ClapTrap("", 100, 50, 20)
{
	std::cout << GREEN "ScavTrap default constructor called" RESET 
	<< std::endl;
}
ScavTrap::ScavTrap(std::string name) :
	ClapTrap(name, 100, 50, 20)
{
	std::cout << BLUE "ScavTrap param constructor called" RESET 
	<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << CYAN "ScavTrap destructor called" RESET 
	<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& cl)
{
	std::cout << MAGENTA "ScavTrap operator = called" RESET 
	<< std::endl;
	operator=(cl);
}

void		ScavTrap::display(std::ostream& stream) const
{
	stream << BRIGHT_GREEN "ScavTrap " << _name << " has " 
	<< _hitPoints << " hit points, " << _energyPoints 
	<< " energy points and " RESET << _attackDamage << " attack dammage.";
}

void 		ScavTrap::attack(std::string const& target)
{
	if (_energyPoints >= 5)
	{
		std::cout << BRIGHT_RED "ScavTrap " << _name 
		<< " attacks " << target << ", causing " << _attackDamage 
		<< " points of damage! " RESET << std::endl;
		_energyPoints -= 5;
	}
	else
		std::cout << RED "Not enough enery points" RESET << std::endl;
}

void		ScavTrap::guardGate()
{
	std::cout << YELLOW "ScavTrap have enterred in Gate keeper mode." RESET 
	<< std::endl;
}

std::ostream&	operator<<(std::ostream& stream, ScavTrap const& cl)
{
	cl.display(stream);
	return (stream);
}