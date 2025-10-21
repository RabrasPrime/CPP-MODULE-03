//
// Created by tomjo on 19/10/2025.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public virtual ClapTrap
{
	public:
        FragTrap();
        explicit FragTrap(const std::string &name);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &other);
        virtual ~FragTrap();

        void highFivesGuys(void);
        std::string getName() const;
};



#endif //FRAGTRAP_HPP
