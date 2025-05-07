/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:14:50 by ismherna          #+#    #+#             */
/*   Updated: 2025/05/07 16:38:42 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

/*===============================INCLUDES===================================*/

# include <iostream>
# include <string>

/*=================================COLORS===================================*/

# define RESET "\033[0m"
# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define BRIGHT_RED "\033[38;5;196m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"
# define BRIGHT_GREEN "\033[38;5;46m"

/*====================================CLASS=================================*/

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string);
		ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
		~ClapTrap();
		ClapTrap(ClapTrap const&);
		ClapTrap&	operator=(ClapTrap const&);
		void		display(std::ostream& stream) const;
		void 		attack(std::string const& target);
		void 		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_attackDamage;
};

std::ostream&	operator<<(std::ostream& stream, ClapTrap const& cl);

#endif