//
// Created by tomjo on 29/08/2025.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>


class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &other);
        ScavTrap &operator=(const ScavTrap &other);
        ~ScavTrap();

        void attack(const std::string &target);
        void guardGate();
		std::string getName() const;
		int getHitPoints() const;
		int getEnergyPoints() const;
        int getAttackDamage() const;
	private:
        static const int scavHitPoints = 100;
        static const int scavEnergyPoints = 50;
        static const int scavAttackDamage = 20;

};



#endif //SCAVTRAP_HPP
