/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djmekki <djmekki@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 22:13:49 by djmekki           #+#    #+#             */
/*   Updated: 2023/07/31 22:13:49 by djmekki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#define R "\x1B[31m"
#define G "\x1B[32m"
#define B "\x1B[36m"
#define C_OFF "\033[0m"
#include <iostream>
#include <string>

class ClapTrap {
    private:
        int _hitPoints;
        int _attackDamage;
        int _energyPoints;
        std::string _name;

    public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);
    ClapTrap& operator=(const ClapTrap &obj);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif