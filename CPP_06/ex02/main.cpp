#include "Base.hpp"

int main(void)
{
	srand(time(NULL));
	Base *res[10];
	
	for (int i = 0; i < 10; i++)
		res[i] = generate();
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		identify(res[i]);
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		identify(*res[i]);
	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++)
		delete res[i];
}
