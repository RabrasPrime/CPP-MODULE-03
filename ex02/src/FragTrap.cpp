//
// Created by tomjo on 19/10/2025.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default") {
    hitPoints = fragHitPoints;
    energyPoints = fragEnergyPoints;
    attackDamage = fragAttackDamage;
    std::cout << "FragTrap " << name << " created with default constructor." << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    hitPoints = fragHitPoints;
    energyPoints = fragEnergyPoints;
    attackDamage = fragAttackDamage;
    std::cout << "FragTrap " << name << " created with parameterized constructor." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap " << name << " created with copy constructor." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap " << name << " assigned with copy assignment operator." << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name << " is requesting a high five!" << std::endl;
}

std::string FragTrap::getName() const {
    return name;
}

int FragTrap::getHitPoints() const {
    return hitPoints;
}

int FragTrap::getEnergyPoints() const {
    return energyPoints;
}

int FragTrap::getAttackDamage() const {
    return attackDamage;
}
