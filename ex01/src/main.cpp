//
// Created by tomjo on 28/08/2025.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    ScavTrap scav1("ScavOne");
    ScavTrap scav2("ScavTwo");

    scav1.attack(scav2.getName());
    scav2.takeDamage(scav1.getAttackDamage());

    scav2.beRepaired(5);
    scav2.attack(scav1.getName());
    scav1.takeDamage(scav2.getAttackDamage());

    scav1.guardGate();
    scav2.guardGate();
    return 0;
}