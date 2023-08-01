/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:46:48 by djmekki           #+#    #+#             */
/*   Updated: 2023/08/01 16:46:48 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("random") {
    _hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
    std::cout << B << "Initialize FragTrap" << C_OFF << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
    std::cout << B << "Initialize FragTrap" << C_OFF << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
    *this = copy;
    std::cout << B << "Initialize FragTrap" << C_OFF << std::endl;
}
FragTrap::~FragTrap() {
    std::cout << B << "FragTrap is destroyed" << C_OFF << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap &obj) {
    this->_name = obj._name;
    this->_hitPoints = obj._hitPoints;
    this->_energyPoints = obj._energyPoints;
    this->_attackDamage = obj._attackDamage;
    return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << G << "High Fives Guys" << C_OFF << std::endl;
}