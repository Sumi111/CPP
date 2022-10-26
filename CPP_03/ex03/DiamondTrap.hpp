#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	public:
    	DiamondTrap(void);
    	DiamondTrap(std::string name);
    	DiamondTrap(DiamondTrap const &copy);
    	DiamondTrap &operator=(DiamondTrap const &rhs);
    	~DiamondTrap();

		void whoAmI();
};

#endif