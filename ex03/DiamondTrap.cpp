/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:33:26 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/14 16:16:10 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(){
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = "default";
	this->ClapTrap::name = this->name + "_clap_name";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"){
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &otherOne){
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &otherOne){
		ClapTrap::operator=(otherOne);
		this->name = otherOne.name;
		this->ClapTrap::name = otherOne.name + "_clap_name";
	}
	return  (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI(){
	std::cout << "I am " << this->name << ", and my ClapTrap name is " << this->ClapTrap::name << "!" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	std::cout << "Attack override" << std::endl;
	ScavTrap::attack(target);
}