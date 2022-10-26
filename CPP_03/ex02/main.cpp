#include "FragTrap.hpp"

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
	FragTrap f1("One");
	print_detail(f1);
	FragTrap f2;
	print_detail(f2);
	std::cout << "\033[33m*********************************************\033[0m" << std::endl;

	f2.attack(f1.getName());
	f1.takeDamage(30);
	print_detail(f1);
	print_detail(f2);
	std::cout << "\033[33m*********************************************\033[0m" << std::endl;

	for(int i = 0; i < 4; i++)
	{
		f2.attack(f1.getName());
		if (f2.getEnergyPt())
			f1.takeDamage(30);
	}
	std::cout << "\033[33m*********************************************\033[0m" << std::endl;

	f2.highFivesGuys();
	print_detail(f2);
	std::cout << "\033[33m*********************************************\033[0m" << std::endl;
}