//
// Created by arnisfet on 28.02.2022.
//

#ifndef EX00_CHECKER_H
#define EX00_CHECKER_H


#include <iomanip>
#include <string>
#include <iostream>
#include <cstring>
#include <cstdlib>

class Checker
{
private:
	std::string _line;
public:
	Checker();
	Checker(std::string line);
	~Checker();

	void check_alphanum(std::string line) const;
	int is_nan(const std::string& line) const;

	void outputChar(std::string line) const;
	void outputInt(std::string line) const;
	void outputFloat(std::string line) const;
	void outputDouble(std::string line) const;
	class Error : public std::exception
		{
		public:
			Error(const char *err_msg) : err_msg(err_msg) {};
			virtual const char *what() const throw() {return (this->err_msg);}

		private:
			const char *err_msg;
		};
};


#endif //EX00_CHECKER_H
