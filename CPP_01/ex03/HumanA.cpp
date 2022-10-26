#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wp):w(wp)
{
	this->name = name;
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->w.getType() << std::endl;
}