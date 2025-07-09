/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:18:37 by ismherna          #+#    #+#             */
/*   Updated: 2025/05/07 17:02:43 by ismherna         ###   ########.fr       */
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

class FragTrap :  virtual public ClapTrap
{
	private:
	public:
		FragTrap();								
		FragTrap(std::string name);
		FragTrap(const FragTrap &ref);				
		FragTrap &operator=(const FragTrap &ref);		
		~FragTrap();								

		void	highFivesGuys(void);
};


#endif