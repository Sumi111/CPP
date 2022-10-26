#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->hit_pt = 100;
	this->energy_pt = 50;
	this->attack_damage = 20;
    std::cout << "\033[33mScavTrap's Default constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->hit_pt = 100;
	this->energy_pt = 50;
	this->attack_damage = 20;
    std::cout << "\033[33mScavTrap's Parameterised constructor called\033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	    std::cout << "\033[33mScavTrap's Destructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
    std::cout << "\033[33mScavTrap's Copy constructor called\033[0m" << std::endl;
    *this = copy;
}
ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "\033[33mScavTrap's Copy assignment operator called\033[0m" << std::endl;

    this->name = ((ScavTrap &)rhs).getName();
    this->hit_pt = ((ScavTrap &)rhs).getHitPt();
    this->energy_pt = ((ScavTrap &)rhs).getEnergyPt();
    this->attack_damage = ((ScavTrap &)rhs).getAttackDamage();
    return (*this);
}
////////////////////////////////////////////////////

void ScavTrap::attack(const std::string& target)
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

void ScavTrap::guardGate()
{
	std::cout << this->name << " is in gate keeper mode! Keep peace!!" << std::endl;
}