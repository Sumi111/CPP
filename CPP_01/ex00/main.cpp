#include "Zombie.hpp"

int main()
{
    Zombie *z1 = newZombie("foo");	//allocated on heap
	z1->announce();
	delete z1;

	randomChump("zombie2");	//allocated on stack

	Zombie *z3 = newZombie("zombie3");
	z3->announce();
	delete z3;

	Zombie *z4 = newZombie("");
	z4->announce();

	randomChump("");
	delete z4;
    
    return (0);
}