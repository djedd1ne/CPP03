/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:26:13 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/31 23:26:13 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ScavTrap scav("Jalal");
    FragTrap frag("Mekki");
	
	scav.attack("random target");
	scav.guardGate();
	frag.attack("random target");
	frag.highFivesGuys();
	frag.takeDamage(10);
	frag.beRepaired(10);
	frag.takeDamage(10);
	return (0);
}