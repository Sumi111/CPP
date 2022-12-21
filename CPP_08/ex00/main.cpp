#include "easyfind.hpp"

int main()
{
	std::list<int>		lst;
	std::vector<int>	vect;
	std::deque<int>		dq;
	
	std::cout << "\033[33m************VECTOR************\033[0m" << std::endl;
	for (int i = 0; i < 5; i++)
		vect.push_back(i * 2);
	do_iter(vect);

	std::cout << "\033[33m\n************DEQUE************\033[0m" << std::endl;
	for (int i = 1; i < 5; i++)
		dq.push_back(i * 3);
	for(int i = 0; i < 5; i++)
		dq.push_front(i * 2);
	do_iter(dq);

	std::cout << "\033[33m\n************LIST************\033[0m" << std::endl;
	for (int i = 1; i < 5; i++)
		lst.push_back(i);
	for(int i = 0; i < 5; i++)
		lst.push_front(i * 2);
	do_iter(lst);

	return (0);
}
