/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:16:39 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/14 23:16:40 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap joe("Joe");
	ClapTrap foe;
	ScavTrap toe("Toe");

	foe = ClapTrap("Foe");

	joe.attack("Foe");
	foe.takeDamage(2);

	foe.beRepaired(10);
	foe.attack("Toe");
	
	toe.takeDamage(2);
	toe.guardGate();
}