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

#include "ScavTrap.hpp"

int main(void) {
    ScavTrap player1("Jalal");
    ScavTrap player2("Mekki");

    player2.attack("Mekki");
    player2.attack("Mekki");
    player2.beRepaired(10);
    player2.takeDamage(42);
    player2.beRepaired(20);
    player2.guardGate();

    for (int i = 0; i < 10; i++)
		player1.attack("Unknown");
	player1.beRepaired(10);
	player1.attack("Unknown");
	player1.takeDamage(100);

    return (0);
}