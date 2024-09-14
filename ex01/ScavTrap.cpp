#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap ("NameUnKnow"){

	this->change_hit(100);
	this->change_energy(50);
	this->change_damage(20);
	std::cout << "Child Constructor(void) called!\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	
	this->change_hit(100);
	this->change_energy(50);
	this->change_damage(20);
	std::cout << "Child Constructor(string) called!\n";
}

ScavTrap::~ScavTrap(void){

	std::cout << "Child Destructor called!\n";
}

ScavTrap::ScavTrap(const ScavTrap& obj): ClapTrap(obj.get_name()){

	std::cout << "Child copy constructor called\n";
	this->change_hit(obj.get_hit());
	this->change_energy(obj.get_energy());
	this->change_damage(obj.get_damage());
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj){

	std::cout << "Child operator constructor called\n";
	if (this != &obj){

		this->change_name(obj.get_name());
		this->change_hit(obj.get_hit());
		this->change_energy(obj.get_energy());
		this->change_damage(obj.get_damage());
	}
	return *this;
}

void	ScavTrap::attack(const std::string& target){
	
	if (this->get_energy() > 0){

		this->change_energy (this->get_energy() - 1);
		std::cout << "ScavTrap[ClapTrap] " << this->get_name() << " attacks " << target
			<< ", causing " << this->get_damage() << " points of damage!"
			<< std::endl;
	}
	else{

		std::cout << "ScavTrap[ClapTrap] does not have enough energy to attack!!!" << std::endl;
	}
	
}

void		ScavTrap::guardGate(void){

	std::cout << "ScavTrap is now in the Gate keeper mode.\n";
}