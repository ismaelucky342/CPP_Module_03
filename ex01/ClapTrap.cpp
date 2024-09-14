#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _point_hit(10), _point_energy(10), _attack_damage(0){

	_name = "UnSet";
	std::cout << "Constructors(void) called!!" << " base class: " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _point_hit(10), _point_energy(10), _attack_damage(0){

	std::cout << "Constructor(string) called!!" << " base class: " << _name << std::endl;
}

ClapTrap::~ClapTrap(void){

	std::cout << "Destructor called!!" << " base class: " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj){

	std::cout << "Constructor(ClapTrap&) called!!" << " base class: " << _name << std::endl;
	this->_name = obj.get_name();
	this->_point_energy = obj.get_energy();
	this->_point_hit = obj.get_hit();
	this->_attack_damage = this->get_damage();
}

std::string		ClapTrap::get_name(void) const{

	return this->_name;
}

unsigned int 	ClapTrap::get_hit(void) const{

	return this->_point_hit;
}

unsigned int	ClapTrap::get_energy(void) const{

	return this->_point_energy;
}

unsigned int	ClapTrap::get_damage(void) const{

	return this->_attack_damage;
}

void			ClapTrap::set_damage(unsigned int new_dam){

	this->_attack_damage = new_dam;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &obj){

	if (this != &obj){

		this->_name = obj.get_name();
		this->_point_energy = obj.get_energy();
		this->_point_hit = obj.get_hit();
		this->_attack_damage = this->get_damage();
	}
	return *this;
}

void		ClapTrap::attack(const std::string& target){

	if (this->_point_energy > 0){

		this->_point_energy --;
		std::cout << "ClapTrap " << this->_name << " attacks " << target
			  << ", causing " << this->_attack_damage << " points of damage!"
			  << std::endl;
	}
	else{

		std::cout << "Do not have enough energy to attack!!!" << std::endl;
	}
}

void		ClapTrap::takeDamage(unsigned int amount){

	if (amount <= _point_hit){
		this->_point_hit -= amount;
		std::cout << _name << " take " << amount << " points of damage!!\n";
	}
	else
		this->_point_hit = 0;
}

void		ClapTrap::beRepaired(unsigned int amount){

	if (this->_point_energy > 0){

		std::cout << _name << " repair itself " << amount << " points of juice!!\n";
		this->_point_energy --;
		this->_point_hit += amount;
	}
	else{

		std::cout << "Do not have enough energy to repair!!!" << std::endl;
	}
}

void		ClapTrap::change_name(std::string new_name){

	_name = new_name;
}
void		ClapTrap::change_hit(unsigned int	new_hit){

	_point_hit = new_hit;
}
void		ClapTrap::change_energy(unsigned int new_energy){

	_point_energy = new_energy;
}
void		ClapTrap::change_damage(unsigned int new_damage){

	_attack_damage = new_damage;
}