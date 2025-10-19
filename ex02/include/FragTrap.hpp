//
// Created by tomjo on 19/10/2025.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP



class FragTrap : public ClapTrap
{
	public:
        FragTrap();
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();

        void highFivesGuys(void);
        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;
	private:
        static const int fragHitPoints = 100;
        static const int fragEnergyPoints = 100;
        static const int fragAttackDamage = 30;
};



#endif //FRAGTRAP_HPP
