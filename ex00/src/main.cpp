//
// Created by tomjo on 28/08/2025.
//

#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap clap1("ClapOne");
    ClapTrap clap2("ClapTwo");

    clap1.attack(clap2.getName());
    clap2.takeDamage(clap1.getAttackDamage());

    clap2.beRepaired(5);
    clap2.attack(clap1.getName());
    clap1.takeDamage(clap2.getAttackDamage());

    return 0;
}