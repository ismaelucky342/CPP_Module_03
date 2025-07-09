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

#include "ScavTrap.hpp"
#include "FragTrap.hpp" // Asegúrate de incluir FragTrap.hpp
#include "DiamondTrap.hpp" // Asegúrate de incluir DiamondTrap.hpp

int main()
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

    std::cout << "\n--- Testing DiamondTrap ---\n";
    DiamondTrap diamondGuy("DiamondGuy");
    
    diamondGuy.attack("some_enemy");
    diamondGuy.takeDamage(10);
    diamondGuy.beRepaired(5);
    diamondGuy.guardGate();
    diamondGuy.highFivesGuys();
    diamondGuy.whoAmI();

    std::cout << "--- End of DiamondTrap Test ---\n";

    return 0;
}