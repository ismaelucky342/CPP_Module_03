/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:18:05 by ismherna          #+#    #+#             */
/*   Updated: 2025/05/07 16:58:56 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "undefined";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << WHITE "FragTrap: Empty constructor called" RESET << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << GREEN "FragTrap: Default constructor called" RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &ref)
{
	std::cout << MAGENTA "FragTrap: Copy constructor called" RESET << std::endl;
	*this = ref;
}

FragTrap &FragTrap::operator=(const FragTrap &ref)
{
	std::cout << BLUE "FragTrap: Copy assignment operator called" RESET << std::endl;
	if (this != &ref)
	{
		_name = ref._name;
		_hitPoints = ref._hitPoints;
		_energyPoints = ref._energyPoints;
		_attackDamage = ref._attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << RED "FragTrap: Destructor called" RESET << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout	<< BRIGHT_GREEN "FragTrap " << _name
				<< " says \"High five!\"" RESET
				<< std::endl;
}