#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* new_zombie;

    if (name.empty())
        name = "Foo_N";
    new_zombie = new Zombie(name);
    return (new_zombie);
}
