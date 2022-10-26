#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cmath>
#include <stdlib.h>

class ClapTrap
{
protected:
    std::string		name;
    unsigned int	hit_pt;
    unsigned int 	energy_pt;
    unsigned int 	attack_damage;
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &copy);
    ~ClapTrap();
    ClapTrap &operator=(ClapTrap const &rhs);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    std::string getName(void);
    int getHitPt(void);
    int getEnergyPt(void);
    int getAttackDamage(void);
    void setAttackDamage(int amount);
};

#endif