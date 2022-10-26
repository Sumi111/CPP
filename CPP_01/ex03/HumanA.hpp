#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		&w;
		std::string name;
		std::string weapon_type;
	public:
		HumanA(std::string name, Weapon &wp);
		~HumanA();
		void attack();
};

#endif