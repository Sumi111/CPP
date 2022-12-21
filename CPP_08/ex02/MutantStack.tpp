#include "MutantStack.hpp"

template <typename T, typename C>
MutantStack<T, C>::MutantStack(){}

template <typename T, typename C>
MutantStack<T, C>::~MutantStack(){}

template <typename T, typename C>
MutantStack<T, C>::MutantStack(MutantStack const &copy)
{
	*this = copy;
}

template <typename T, typename C>
MutantStack<T, C> &MutantStack<T, C>::operator=(MutantStack const &rhs)
{
	if (this != &rhs)
	{
		this->c = rhs->c;
	}
	return *this;
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::begin() 
{
	return this->c.begin();
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::end()
{
	return this->c.end();
}

//////////////////////////////////////////
// #ifndef MUTANTSTACK_TPP
// #define MUTANTSTACK_TPP



// template <typename T>
// void pushToContainer(T &container) {
// 	for (size_t i = 0; i < 10; i++) {
// 		container.push_back(12.3456 * i);
// 	}
// }

// #endif