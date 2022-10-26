#include "DiamondTrap.hpp"

void print_detail(ClapTrap &person)
{
    std::cout << "Name          : " << person.getName() << std::endl;
    std::cout << "Hit points    : " << person.getHitPt() << std::endl;
    std::cout << "Energy points : " << person.getEnergyPt() << std::endl;
    std::cout << "Attack damage : " << person.getAttackDamage() << std::endl;
    std::cout << "\n";
}

int main(void)
{
	DiamondTrap d1("One");
	print_detail(d1);
	
	DiamondTrap d2("Two");
	print_detail(d2);
	std::cout << "\033[33m*********************************************\033[0m" << std::endl;

	d2.ScavTrap::attack("One");
	d1.takeDamage(30);
	print_detail(d1);
	print_detail(d2);
	std::cout << "\033[33m*********************************************\033[0m" << std::endl;

	d1.whoAmI();
}