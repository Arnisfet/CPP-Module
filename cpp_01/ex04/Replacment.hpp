//
// Created by arnisfet on 06.02.2022.
//

#ifndef EX04_REPLACMENT_HPP
#define EX04_REPLACMENT_HPP

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cstdlib>

class Replace {
public:

	Replace(const std::string &filename, const std::string &s1, const std::string & s2);
	~Replace();
	void swap();
	void checkLine(std::string &line);

private:
	std::string _s1;
	std::string _s2;
	std::string _filename;
};

#endif //EX04_REPLACMENT_HPP
