//
// Created by tomjo on 28/08/2025.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    DiamondTrap diamond1("DiamondOne");
    DiamondTrap diamond2("DiamondTwo");

    diamond1.attack(diamond2.getName());
    diamond2.takeDamage(diamond1.getAttackDamage());
    diamond2.beRepaired(5);
    diamond2.attack(diamond1.getName());
    diamond1.takeDamage(diamond2.getAttackDamage());
    diamond1.highFivesGuys();
    diamond2.highFivesGuys();
    diamond1.guardGate();
    diamond2.guardGate();
    diamond1.whoAmI();
    diamond2.whoAmI();
    return 0;
}