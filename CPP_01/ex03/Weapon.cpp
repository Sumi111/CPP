#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
	this->type = weapon_type;
	return;
}

Weapon::~Weapon()
{
	return ;
}

void	Weapon::setType(std::string weapon_type)
{
	this->type = weapon_type;
	return ;
}

const std::string& Weapon::getType(void)
{
	return (this->type);
}

