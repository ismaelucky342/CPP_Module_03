
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

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