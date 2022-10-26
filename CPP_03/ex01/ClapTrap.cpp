#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "\033[32mClapTrap's Default constructor called\033[0m" << std::endl;
    this->name = "Someone";
    this->hit_pt = 10;
    this->energy_pt = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    std::cout << "\033[32mClapTrap's Copy constructor called\033[0m" << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "\033[32mClapTrap's Copy assignment operator called\033[0m" << std::endl;

    this->name = ((ClapTrap &)rhs).getName();
    this->hit_pt = ((ClapTrap &)rhs).getHitPt();
    this->energy_pt = ((ClapTrap &)rhs).getEnergyPt();
    this->attack_damage = ((ClapTrap &)rhs).getAttackDamage();
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "\033[32mClapTrap's Destructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hit_pt(10), energy_pt(10), attack_damage(0)
{
    std::cout << "\033[32mClapTrap's Parameterised constructor called\033[0m" << std::endl;
}
////////////////////////////////////////////////////

std::string ClapTrap::getName(void)
{
    return(this->name);
}

int ClapTrap::getHitPt(void)
{
    return(this->hit_pt);
}

int ClapTrap::getEnergyPt(void)
{
    return(this->energy_pt);
}

int ClapTrap::getAttackDamage(void)
{
    return(this->attack_damage);
}

void ClapTrap::setAttackDamage(int amount)
{
    this->attack_damage = amount;
}
////////////////////////////////////////////////////

void ClapTrap::attack(const std::string& target)
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

void ClapTrap::takeDamage(unsigned int amount)
{
    if (!this->hit_pt)
    {
        std::cout << this->name << " cannot be attacked, reached 0 hit points." << std::endl;
        return ;
    }
    if (amount > this->hit_pt)
        this->hit_pt = 0;
    else
        this->hit_pt -= amount;
    std::cout << this->name << " was attacked! Now has " << this->hit_pt << " hits points only." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->energy_pt)
    {
        std::cout << this->name << " cannot be repaired, " << this->name << " has died." << std::endl;
        return ;
    }
    this->energy_pt--;
    this->hit_pt += amount;
    std::cout <<this->name << "'s hit point increased! Now has " << this->hit_pt << " hit points." << std::endl;
}