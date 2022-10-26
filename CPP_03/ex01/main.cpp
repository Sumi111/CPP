#include "ScavTrap.hpp"

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
	ScavTrap s1("One");
	print_detail(s1);
	ScavTrap s2;
	print_detail(s2);
	std::cout << "\033[33m*********************************************\033[0m" << std::endl;

	s2.attack(s1.getName());
	s1.takeDamage(20);
	print_detail(s1);
	print_detail(s2);
	std::cout << "\033[33m*********************************************\033[0m" << std::endl;

	for(int i = 0; i < 5; i++)
	{
		s2.attack(s1.getName());
		if (s2.getEnergyPt())
			s1.takeDamage(20);
	}
	std::cout << "\033[33m*********************************************\033[0m" << std::endl;

	s1.guardGate();
	print_detail(s1);
	print_detail(s2);
	std::cout << "\033[33m*********************************************\033[0m" << std::endl;
	
	ScavTrap s3(s2);
	print_detail(s3);
}