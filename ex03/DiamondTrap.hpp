/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:59:59 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/14 16:07:39 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap {
	private:
		std::string name;
	public :
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap &operator=(const DiamondTrap &otherOne);
		
		void	whoAmI();
		void	attack(const std::string &target);
};

#endif