/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:19:00 by ismherna          #+#    #+#             */
/*   Updated: 2025/05/07 16:52:48 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

/*===============================INCLUDES===================================*/

#include <string>
#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

/*=================================CLASS====================================*/

class ScavTrap : public ClapTrap
{
	private:
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &ref);				
		ScavTrap &operator=(const ScavTrap &ref);		
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
};


#endif