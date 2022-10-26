#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->hit_pt = 100;
	this->energy_pt = 100;
	this->attack_damage = 30;
    std::cout << "\033[33mFragTrap's Default constructor called\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->hit_pt = 100;
	this->energy_pt = 100;
	this->attack_damage = 30;
    std::cout << "\033[33mFragTrap's Parameterised constructor called\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	    std::cout << "\033[33mFragTrap's Destructor called\033[0m" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
    std::cout << "\033[33mFragTrap's Copy constructor called\033[0m" << std::endl;
    *this = copy;
}
FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "\033[33mFragTrap's Copy assignment operator called\033[0m" << std::endl;

    this->name = ((FragTrap &)rhs).getName();
    this->hit_pt = ((FragTrap &)rhs).getHitPt();
    this->energy_pt = ((FragTrap &)rhs).getEnergyPt();
    this->attack_damage = ((FragTrap &)rhs).getAttackDamage();
    return (*this);
}
////////////////////////////////////////////////////

void FragTrap::attack(const std::string& target)
{
    std::string str =  target.empty() ? "target" : target;
    if (!this->hit_pt)
    {
        std::cout << this->name << " cannot attack " << target << " has no hit points left."<< std::endl;
        return ;
    }
    if (!this->energy_pt)
    {
        std::cout << this->name << " cannot attack " << target << " has no energy points left."<< std::endl;
        return ;
    }
    this->energy_pt--;
    std::cout << this->name << " attacked " << str << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->energy_pt)
		std::cout << this->name << " high fives!" << std::endl;
}
