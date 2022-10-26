#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap()
{
	this->energy_pt = 50;
	this->name = "Someone";
    std::cout << "\033[31mDiamondTrap's Default constructor called\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	this->energy_pt = 50;
	this->name = name;
    std::cout << "\033[31mDiamondTrap's Parameterised constructor called\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[31mDiamondTrap's Destructor called\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
    std::cout << "\033[31mDiamondTrap's Copy constructor called\033[0m" << std::endl;
    *this = copy;
}
DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
    std::cout << "\033[31mDiamondTrap's Copy assignment operator called\033[0m" << std::endl;

    this->name = ((DiamondTrap &)rhs).getName();
    this->hit_pt = ((DiamondTrap &)rhs).getHitPt();
    this->energy_pt = ((DiamondTrap &)rhs).getEnergyPt();
    this->attack_damage = ((DiamondTrap &)rhs).getAttackDamage();
    return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's name: " << this->name << std::endl;
	std::cout << "ClapTrap's name: " << ClapTrap::name << std::endl;
}