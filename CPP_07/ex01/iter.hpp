#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, int len, void (*f)(T const &a))
{
	for(int i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void ft_print(T const &a)
{
	std::cout << a << std::endl;
}

#endif