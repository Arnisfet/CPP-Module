//
// Created by arnisfet on 08.03.2022.
//

#ifndef EX01_SPAN_H
#define EX01_SPAN_H


#include <iostream>
#include <utility>
#include <vector>

class Span {
private:
	unsigned int _size;
	std::vector<int> _v;

public:
	Span(void);
	Span(unsigned int size);
	Span(const Span &rhs);

	Span &operator=(const Span &rhs);

	typedef std::vector<int>::iterator iterator;

	void addNumber(int number);
	int shortestSpan(void);
	int longestSpan(void);

	void fillNumberInRange(Span::iterator begin, Span::iterator end,
						   std::pair<int, int> range);

	iterator begin(void);
	iterator end(void);

	void printElements(void);

	class NotEnoughStorageException : public std::exception {
		const char *what() const throw();
	};

	class NotEnoughtElementsException : public std::exception {
		const char *what() const throw();
	};

	~Span(void);
};


std::ostream	&operator<<( std::ostream &ostr, const Span &instance );

#endif //EX01_SPAN_H
