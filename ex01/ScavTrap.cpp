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

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
    std::cout << B << "Initialize ScavTrap" << C_OFF << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << B << "ScavTrap is destroyed" << C_OFF << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap guardGate mode activated" << std::endl;
}