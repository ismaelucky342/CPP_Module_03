/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:18:05 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/14 23:18:06 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "undefined";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap: Empty constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ref)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
	*this = ref;
}

FragTrap &FragTrap::operator=(const FragTrap &ref)
{
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
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
	std::cout << "FragTrap: Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout	<< "FragTrap " << _name
				<< " says \"High five!\""
				<< std::endl;
}