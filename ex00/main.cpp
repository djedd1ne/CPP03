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

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap player1("Jalal");
    ClapTrap player2("Mekki");

    player2.attack("Mekki");
    player2.attack("Mekki");
    player2.beRepaired(10);
    player2.takeDamage(42);
    player2.beRepaired(20);

    return (0);
}