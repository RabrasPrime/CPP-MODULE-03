//
// Created by tomjo on 28/08/2025.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
    FragTrap frag1("FragOne");
    FragTrap frag2("FragTwo");

    frag1.attack(frag2.getName());
    frag2.takeDamage(frag1.getAttackDamage());
    frag2.beRepaired(5);
    frag2.attack(frag1.getName());
    frag1.takeDamage(frag2.getAttackDamage());
    frag1.highFivesGuys();
    frag2.highFivesGuys();

    return 0;
}