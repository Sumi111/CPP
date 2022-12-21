#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <set>
#include <iterator>

class Span
{
	private:
		unsigned int	N;
		std::set<int>	s;
		std::set<int>::iterator itr;
		
	public:
		Span();
		Span(unsigned int _N);
		~Span();
		Span(Span const &copy);
        Span &operator=(Span const &rhs);

		unsigned int getN() const;
		void	addNumber(int n);
		void	show();
		int		shortestSpan();
		int		longestSpan();
		void	fillrange();

		class MaxSize :public std::exception
        {
            public: virtual const char *what() const throw();
        };
		class InvalidSize :public std::exception
        {
            public: virtual const char *what() const throw();
        };
		class InvalidSizeSort :public std::exception
        {
            public: virtual const char *what() const throw();
        };
};

#endif