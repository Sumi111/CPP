#include "ClapTrap.hpp"

void print_detail(ClapTrap &person)
{
    std::cout << "Name          : " << person.getName() << std::endl;
    std::cout << "Hit points    : " << person.getHitPt() << std::endl;
    std::cout << "Energy points : " << person.getEnergyPt() << std::endl;
    std::cout << "Attack damage : " << person.getAttackDamage() << std::endl;
    std::cout << "\n";
}

int main()
{
    ClapTrap test1("One");
    print_detail(test1);
    ClapTrap test2("Two");
    print_detail(test2);
    ClapTrap test3;
	print_detail(test3);
    std::cout << "\033[33m*********************************************\033[0m" << std::endl;

    test1.setAttackDamage(15);
    test2.setAttackDamage(5);
    test3.setAttackDamage(5);

    test2.attack("one");
    test1.takeDamage(5);
    print_detail(test2);
    print_detail(test1);
    std::cout << "\033[33m*********************************************\033[0m" << std::endl;

    test1.attack("someone");
    test3.takeDamage(15);
    print_detail(test3);
    print_detail(test1);
    std::cout << "\033[33m*********************************************\033[0m" << std::endl;
    
    test3.attack("one");
    test3.beRepaired(5);
    print_detail(test3);
    print_detail(test1);
    std::cout << "\033[33m*********************************************\033[0m" << std::endl;

    test3.attack("one");
    test1.takeDamage(5);
	test1.takeDamage(5);
    print_detail(test3);
    print_detail(test1);
    std::cout << "\033[33m*********************************************\033[0m" << std::endl;

    test1.beRepaired(100);
    for (int i = 0; i < 9; i++)
    {
        test3.attack("one");
        if (test3.getEnergyPt())
            test1.takeDamage(5);
    }
	std::cout << std::endl;
	test3.beRepaired(100);

    print_detail(test3);
    print_detail(test1);
}