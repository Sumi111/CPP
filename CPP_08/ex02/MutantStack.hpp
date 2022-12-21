#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T>
{
	public :
		MutantStack();
		~MutantStack();
		MutantStack(MutantStack const &copy);
		MutantStack &operator=(MutantStack const &rhs);

		// typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename C::iterator iterator;
		iterator begin();
		iterator end();

};

#include "MutantStack.tpp"

#endif
