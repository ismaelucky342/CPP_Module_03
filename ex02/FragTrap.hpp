/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:18:37 by ismherna          #+#    #+#             */
/*   Updated: 2025/05/07 16:52:23 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

/*===============================INCLUDES===================================*/

#include <string>
#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

/*=================================CLASS====================================*/

class FragTrap : public ClapTrap
{
	private:
	public:
		FragTrap();										// Default constructor
		FragTrap(std::string name);						// Constructor with name
		FragTrap(const FragTrap &ref);					// Copy constructor
		FragTrap &operator=(const FragTrap &ref);		// Copy assignment operator
		~FragTrap();								// Destructor

		void	highFivesGuys(void);
};


#endif