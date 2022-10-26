#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cmath>
#include <stdlib.h>

class ClapTrap
{
private:
    std::string		name;
    unsigned int	hit_pt;
    unsigned int	energy_pt;
    unsigned int	attack_damage;
public:
    ClapTrap(void);
    ~ClapTrap();
    ClapTrap(ClapTrap const &copy);
    ClapTrap &operator=(ClapTrap const &rhs);
    
	ClapTrap(std::string name);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    std::string getName(void);
    int 		getHitPt(void);
    int 		getEnergyPt(void);
    int 		getAttackDamage(void);
    void 		setAttackDamage(int amount);
};

#endif