/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:18:37 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/14 23:18:38 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
	public:
		FragTrap();								// Default constructor
		FragTrap(std::string name);
		FragTrap(const FragTrap &ref);				// Copy constructor
		FragTrap &operator=(const FragTrap &ref);		// Copy assignment operator
		~FragTrap();								// Destructor

		void	highFivesGuys(void);
};


#endif