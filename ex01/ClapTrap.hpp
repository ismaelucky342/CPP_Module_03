
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap{

	private:
		std::string		_name;
		unsigned int	_point_hit;
		unsigned int	_point_energy;
		unsigned int	_attack_damage;

	public:
						ClapTrap(void);
						ClapTrap(std::string name);
						~ClapTrap(void);
						ClapTrap(const ClapTrap &obj);
		ClapTrap&		operator=(const ClapTrap &obj);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		get_name(void) const;
		unsigned int 	get_hit(void) const;
		unsigned int	get_energy(void) const;
		unsigned int	get_damage(void) const;
		void			set_damage(unsigned int new_dam);
		void			change_name(std::string new_name);
		void			change_hit(unsigned int	new_hit);
		void			change_energy(unsigned int new_energy);
		void			change_damage(unsigned int new_damage);
};

#endif