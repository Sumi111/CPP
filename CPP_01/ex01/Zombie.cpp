#include "Zombie.hpp"

Zombie::Zombie()
{
    return ;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": Destroyed" << std::endl;
}

void Zombie::announce(void)
{
		std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string name)
{
    if (name.empty())
        name = "Foo";
    this->name = name;
    return ;
}