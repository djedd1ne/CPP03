/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 22:30:34 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/31 22:30:34 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}
ClapTrap::ClapTrap(std::string name) {
    _name = name;
    _hitPoints =10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << B << "Initialize ClapTrap" << C_OFF << std::endl; 
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj) {
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_energyPoints = obj._energyPoints;
    this->_attackDamage = obj._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << B << "ClapTrap is destroyed" << C_OFF << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name
        << " is already dead" << std::endl;
    }
    else if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name
        << " no energy points left" << std::endl;
    }
    else if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << R << "ClapTrap " << _name << " attacks "
        << target << ", causing " << _attackDamage
        << " points of damage!" << C_OFF << std::endl;
        _energyPoints--;
        _hitPoints -= _attackDamage;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap "<<_name;
		std::cout << " is already dead"<<std::endl;
	}
    else if (_energyPoints <= 0)
	{
		std::cout  <<"ClapTrap "<< _name
		<< " no energy points left"<<std::endl;
	}
	else if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap "<< _name
		<<" takes "<< amount <<" points of damage!" << std::endl;
		_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{

	if (_energyPoints <= 0)
	{
		std::cout <<"ClapTrap " << _name
		<< " no energy points left" << std::endl;
	}
	else if (_hitPoints <= 0)
	{
		std::cout<<"ClapTrap "<< _name;
		std::cout<<" is dead!"<<std::endl;
	}
    else if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout<< G << "ClapTrap "<< _name
		<< " repairs "<< amount <<" hitpoints" << C_OFF <<std::endl;
		_energyPoints--;
        _hitPoints += amount;
	}
}
