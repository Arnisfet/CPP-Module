//
// Created by arnisfet on 28.02.2022.
//

#ifndef EX00_CHECKER_H
#define EX00_CHECKER_H


#include <iomanip>
#include <string>
#include <iostream>
#include <cstring>

class Checker
{
private:
	std::string _line;
public:
	Checker();
	Checker(std::string line);
	~Checker();

	void check_alphanum(std::string line) const;
	int is_nan(std::string line) const;
class Alphanumeric : public std::exception
		{
		public:
			virtual const char *what() const throw() {return ("Alphanumeric is forbidden!\n");}
		};
};


#endif //EX00_CHECKER_H
