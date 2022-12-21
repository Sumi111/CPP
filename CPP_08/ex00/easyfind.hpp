#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <iterator>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T lst, int n)
{
	return (std::find(lst.begin(), lst.end(), n));
};

template <typename T>
void showlist(T lst)
{
    typename T::iterator it;
    for (it = lst.begin(); it != lst.end(); ++it)
        std::cout << *it << "\t";
    std::cout << '\n';
}

template <typename T>
void do_iter(T lst)
{
	int n;
	typename T::iterator iter;

	showlist(lst);
	std::cout << "Enter value to search: ";
	std::cin >> n;
	if (std::cin.fail())
	{
		std::cout << "\033[31mInvalid value\n\033[0m";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	iter = easyfind(lst, n);
	if (*iter == n)
		std::cout << "\033[32mElement found!\033[0m" << std::endl;
	else
		std::cout << "\033[31mElement is not found!\033[0m" << std::endl;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

#endif

// Containers in STL:
// ARRAYS: Static contiguous array
// VECTORS: Dynamic contiguous array
// DEQUE: Double-ended queue 
// FORWARD_LIST: Singly-linked list 
// LIST: Doubly-linked list
// Iterators: pointS at the memory addresses of STL containers. 
