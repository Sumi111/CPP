#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*w;
		std::string name;
		std::string weapon_type;
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &wp);
};

#endif