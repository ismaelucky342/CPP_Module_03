/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:23:02 by ismherna          #+#    #+#             */
/*   Updated: 2025/05/07 17:02:23 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

/*===============================INCLUDES===================================*/

#include <string>
#include <iomanip>
#include <iostream>
#include <string>
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

/*=================================CLASS===================================*/

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &ref);				
		~DiamondTrap();								

		void	whoAmI();
};


#endif