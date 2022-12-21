#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	std::cout << "\033[1;32m\t\tMUTANT STACK\n\033[0m";
	mstack.push(5);
	mstack.push(17);
	std::cout << "Element on top of the stack: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "\nElement on top of the stack after pop: " << mstack.top() << std::endl;
	std::cout << "Stack size is : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(4);
	mstack.push(737);
	mstack.push(-5);
	mstack.push(99);
	mstack.push(7);
	mstack.push(0);
	std::cout << "\nStack using iterators	: ";
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << "\t";
		++it;
	}
	std::cout << "\nStack size is : " << mstack.size() << std::endl;

	std::cout << "\n\nStack using pop		: ";
	while (!mstack.empty())
	{
    	std::cout << mstack.top() << "\t";
    	mstack.pop();
    }
	std::cout << "\nStack size is : " << mstack.size() << std::endl;


	std::list<int> lstack;

	std::cout << "\033[1;32m\n\n\t\tLIST\n\033[0m";
	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << "Element on top of the stack: " << lstack.back() << std::endl;
	lstack.pop_back();
	std::cout << "\nElement on top of the stack after pop: " << lstack.back() << std::endl;
	std::cout << "Stack size is : " << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(4);
	lstack.push_back(737);
	lstack.push_back(-5);
	lstack.push_back(99);
	lstack.push_back(7);
	lstack.push_back(0);
	std::cout << "\nStack using iterators	: ";
	std::list<int>::iterator l_it = lstack.begin();
	std::list<int>::iterator l_ite = lstack.end();
	++l_it;
	--l_it;
	while (l_it != l_ite)
	{
		std::cout << *l_it << "\t";
		++l_it;
	}
	std::cout << "\nStack size is : " << lstack.size() << std::endl;

	std::cout << "\n\nStack using pop		: ";
	while (!lstack.empty())
	{
    	std::cout << lstack.back() << "\t";
    	lstack.pop_back();
    }
	std::cout << "\nStack size is : " << lstack.size() << std::endl;
	return 0;
}