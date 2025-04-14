/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:18:36 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/14 14:50:08 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap{
	protected :
		std::string name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
	public :
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &src);
		ClapTrap &operator = (const ClapTrap &otherOne);
		~ClapTrap();
		
		void	set_attack_damage(unsigned int value);
		
		void	attack(const std::string &target);
		void 	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif