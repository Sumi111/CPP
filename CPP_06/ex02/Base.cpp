#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base *generate(void)
{
	int n = rand() % 3;
	if (n == 0)
		return (new A);
	else if (n == 1)
		return new B;
	else
		return new C;
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Object pointed to by p : A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Object pointed to by p : B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Object pointed to by p : C" << std::endl;
	else
		std::cout << "Object pointed to by p : unknown" << std::endl;
}

void identify(Base& p)
{
	Base ptr;

	try
	{
		ptr = dynamic_cast<A&>(p);
		std::cout << "Identified object : A" << std::endl;
	}
	catch(std::exception &e) {}
	try
	{
		ptr = dynamic_cast<B&>(p);
		std::cout << "Identified object : B" << std::endl;
	}
	catch(std::exception& e) {}
	try
	{
		ptr = dynamic_cast<C&>(p);
		std::cout << "Identified object : C" << std::endl;
	}
	catch(std::exception& e) {}
}