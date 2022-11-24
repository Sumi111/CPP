#include "Array.hpp"

template <class T>
Array<T>::Array()
{
	this->n = 0;
	this->a = NULL;  
};

template <class T>
Array<T>::Array(unsigned int n)
{
	this->n = n;
	this->a = new T[n];
}

template <class T>
Array<T>::~Array()
{
	delete [] this->a;
}

template <class T>
Array<T>::Array(Array const &cpy)
{
	this->n = cpy.n;
	this->a = new T[n];
	for (size_t i = 0; i < n; i++)
		this->a[i] = cpy.a[i];
}

template <class T>
Array<T> &Array<T>::operator=(Array const &rhs)
{
	this->n = rhs.n;
	if (this->a)
		delete [] this->a;
	this->a = new T[n];
	for (size_t i = 0; i < n; i++)
	{
		this->a[i] = rhs.a[i];
	}

	return (*this);
}

template <class T>
T&	Array<T>::operator[](int i) const
{
    if (i >= static_cast<int>(this->n) || i < 0)
    {
        throw invalidIndex();
    }
    return(this->a[i]);
}

template <typename T>
const char *Array<T>::invalidIndex::what() const throw()
{
    return ("Index is invalid. Try again!!");
}