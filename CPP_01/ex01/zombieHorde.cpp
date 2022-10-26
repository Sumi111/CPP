#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
    Zombie* zombiesss;

	zombiesss = new (std::nothrow)Zombie[N];
   	for (int i = 0; i < N; i++)
       	zombiesss[i].setname(name);
   	return (zombiesss);
}
