#include <algorithm>
#include "Span.h"

int main() {
	std::cout << "============ IN SUBJECT ============" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.printElements();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "============ MY TEST ============" << std::endl;
	std::pair<int, int> range(0, 1000);
	sp.fillNumberInRange(sp.begin(), sp.end(), range);
	sp.printElements();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try {
		sp.addNumber(42);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::pair<int, int> range2(0, 2147483647);
	sp.fillNumberInRange(sp.begin(), sp.end(), range2);
	sp.printElements();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}