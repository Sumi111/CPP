#include "Span.hpp"

int main()
{
	std::cout << "\033[32m\n*****************************Span*****************************\033[0m" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.show();
	std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span  : "<< sp.longestSpan() << std::endl;
	
	std::cout << "\033[32m\n*************************Invalid Size*************************\033[0m" << std::endl;
	Span sp1 = Span(-5);

	std::cout << "\033[32m\n*****************Adding more than the capcity*****************\033[0m" << std::endl;
	Span sp2(sp);
	sp2.addNumber(-16);
	sp2.addNumber(13);
	sp2.show();
	std::cout << "Shortest Span : " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest Span  : "<< sp2.longestSpan() << std::endl;

	std::cout << "\033[32m\n************************Just 1 element************************\033[0m" << std::endl;
	Span sp3 = Span(1);
	sp3.addNumber(6);
	sp3.show();
	std::cout << "Shortest Span : " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest Span  : "<< sp3.longestSpan() << std::endl;

	std::cout << "\033[32m\n************************Adding in one go************************\033[0m" << std::endl;
	Span sp4 = Span(10000);
	sp4.fillrange();
	// sp4.show();
	std::cout << "Shortest Span : " << sp4.shortestSpan() << std::endl;
	std::cout << "Longest Span  : "<< sp4.longestSpan() << std::endl;

	return 0;
}