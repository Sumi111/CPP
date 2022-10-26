#include "Zombie.hpp"

void randomChump(std::string name)
{
    if (name.empty())
        name = "Foo_R";
    Zombie z(name);
    z.announce();
}
