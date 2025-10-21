//
// Created by tomjo on 29/08/2025.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public virtual ClapTrap {
    public:
        ScavTrap();
        explicit ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &other);
        ScavTrap &operator=(const ScavTrap &other);
        virtual ~ScavTrap();

        void attack(const std::string &target);
        void guardGate();
};

#endif //SCAVTRAP_HPP
