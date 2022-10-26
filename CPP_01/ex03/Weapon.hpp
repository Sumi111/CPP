#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string weapon_type);
		~Weapon();
		
		const std::string& getType(void);
		void		setType(std::string weapon_type);
};

#endif