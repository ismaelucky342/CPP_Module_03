/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:14:50 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/14 23:17:45 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iomanip>
#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		ClapTrap();								// Default constructor
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &ref);				// Copy constructor
		ClapTrap &operator=(const ClapTrap &ref);		// Copy assignment operator
		~ClapTrap();								// Destructor

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};


#endif