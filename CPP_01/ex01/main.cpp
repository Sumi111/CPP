#include "Zombie.hpp"

int main(void)
{
    Zombie	*z1 = zombieHorde(5, "zombie1");
	Zombie	*z2 = zombieHorde(10, "zombie2");
	for (int i = 0; i < 5; i++) 
    {
		if (z1)
			z1[i].announce();
    }
	for (int i = 0; i < 10; i++)
    {
		if (z2)
			z2[i].announce();
	}
	delete [] z2;
	delete [] z1;
       
    return (0);
}