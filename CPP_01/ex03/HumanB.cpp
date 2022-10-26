#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->w = NULL;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::attack()
{
	if (w)
		std::cout << this->name << " attacks with their " << this->w->getType() << std::endl;
	else
		std::cout << this->name << " does not have a weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &wp)
{
	this->w = &wp;
}