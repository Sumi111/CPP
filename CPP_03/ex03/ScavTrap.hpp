#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
    	ScavTrap(ScavTrap const &copy);
    	ScavTrap &operator=(ScavTrap const &rhs);
		~ScavTrap();

    	void attack(const std::string& target);
		void guardGate();
};

#endif