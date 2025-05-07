/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:37:38 by ismherna          #+#    #+#             */
/*   Updated: 2025/05/07 16:38:26 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

/*===============================INCLUDES===================================*/

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

/*====================================CLASS=================================*/

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap const&);
		void		display(std::ostream& stream) const;
		void 		attack(std::string const& target);
		void		guardGate();

	protected:
};

std::ostream&	operator<<(std::ostream& stream, ScavTrap const& cl);

#endif