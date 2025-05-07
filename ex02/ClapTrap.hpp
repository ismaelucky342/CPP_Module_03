/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:14:50 by ismherna          #+#    #+#             */
/*   Updated: 2025/05/07 16:51:57 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

/*===============================INCLUDES===================================*/

#include <string>
#include <iomanip>
#include <iostream>

/*=================================COLORS===================================*/
#define RESET "\033[0m"
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define BRIGHT_RED "\033[38;5;196m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define BRIGHT_GREEN "\033[38;5;46m"

/*====================================CLASS=================================*/

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