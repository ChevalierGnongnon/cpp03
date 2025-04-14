/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:27:13 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/14 14:14:14 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap : public virtual ClapTrap {
	public :
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		ScavTrap &operator = (const ScavTrap &otherOne);
		
		void	guardGate();
		void	attack(const std::string &target);
};

#endif