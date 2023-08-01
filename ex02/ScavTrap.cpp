/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 01:35:41 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/01 01:35:41 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("random") {
    _hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
    std::cout << B << "Initialize ScavTrap" << C_OFF << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
    std::cout << B << "Initialize ScavTrap" << C_OFF << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
    *this = copy;
    std::cout << B << "Initialize ScavTrap" << C_OFF << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &obj) {
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_energyPoints = obj._energyPoints;
    this->_attackDamage = obj._attackDamage;
    return (*this);
}
ScavTrap::~ScavTrap(){
    std::cout << B << "ScavTrap is destroyed" << C_OFF << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap guardGate mode activated" << std::endl;
}

void ScavTrap::attack(const std::string &target){
    if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << _name
        << " is dead!" << std::endl;
    }
    else if (_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name
        << " no energy!" << std::endl;
    }
    else if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << R << "ScavTrap " << _name << " takes "
        << target << C_OFF << std::endl;
        _energyPoints--;
        _hitPoints -= _attackDamage;
    }
}