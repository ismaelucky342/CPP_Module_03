#include "ScavTrap.hpp"

int main(void){

	ScavTrap	test2("new_name");
	ScavTrap	test;

	test = test2;
	// ClapTrap	obj1("test1");
	// ClapTrap	obj2(obj1);
	// ClapTrap	obj3;

	// obj3 = obj1;

	// std::cout << obj1.get_name() << std::endl;
	// std::cout << obj1.get_energy() << std::endl;
	// std::cout << obj2.get_name() << std::endl;
	// std::cout << obj2.get_energy() << std::endl;
	// std::cout << obj3.get_name() << std::endl;
	// std::cout << obj3.get_energy() << std::endl;

	// obj1.attack(obj3.get_name());
	test.attack("jajaja");
	test.attack("jajaja");
	test.attack("jajaja");
	return 0;
}