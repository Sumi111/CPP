#include "Span.hpp"

/****************************Constructors/Destructors****************************/
Span::Span() : N(1) {
	// std::cout << "\033[32mSpan's Default constructor called\033[0m" << std::endl;
}

Span::Span(unsigned int _N) {
	try
	{
		if ((int)_N <= 0)
			throw Span::InvalidSize();
		this->N = _N;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	// std::cout << "\033[32mSpan's Parameterized constructor called\033[0m" << std::endl;
}

Span::~Span() {
    // std::cout << "\033[32mSpan's Destructor called\033[0m" << std::endl;
}

Span::Span(Span const &copy) {
    *this = copy;
    // std::cout << "\033[32mCopy constructor called\033[0m" << std::endl;
}

Span &Span::operator=(Span const &rhs) {
	this->N = ((Span &)rhs).getN();
	this->s = rhs.s;
    // std::cout << "\033[32mCopy assignment operator called\033[0m" << std::endl;
    return (*this);
}

/****************************Member Functions****************************/
unsigned int Span::getN() const
{
    return (this->N);
}

void Span::addNumber(int n)
{
	try
	{
		int ct = s.size();
		if (ct < (int)this->N)
			s.insert(n);
		else
			throw Span::MaxSize();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}

int Span::shortestSpan()
{
	try
	{
		if (s.size() <= 1)
			throw Span::InvalidSizeSort();
		int s1;
		int start = *s.begin();
		s1 = *(s.upper_bound(start)) -  *s.begin();
		return (s1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	return (0);
}

int Span::longestSpan()
{
	std::set<int>::iterator start;
	int end;
	try
	{
		if (s.size() <= 1)
			throw Span::InvalidSizeSort();
		start = s.begin();
		for (itr = s.begin(); itr != s.end(); itr++)
			end = *itr;
		return (end - *start);	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	return (0);
}

void Span::show()
{
    std::cout << "\nThe set contains : \t";
    for (itr = s.begin(); itr != s.end(); itr++) 
	{
        std::cout << *itr << '\t';
    }
	std::cout << '\n' << std::endl;
}

int gen()
{
	int i = 0;
    return (i);
}

void Span::fillrange()
{
	try
	{
		if ((int)this->N <= 0)
			throw Span::InvalidSizeSort();
		for (unsigned int i = 0; i < this->N; i++) 
			s.insert(i);
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

/****************************Exceptions****************************/
const char	*Span::MaxSize::what() const throw() 
{
	return ("\nOops, Can't add anymore numbers!!\n");
}

const char	*Span::InvalidSize::what() const throw() 
{
	return ("\nOops, provided size is invalid!!\n");
}

const char	*Span::InvalidSizeSort::what() const throw() 
{
	return ("Can't find span for the provided size!!\n");
}