//
// Created by arnisfet on 28.02.2022.
//

#include "Checker.h"

Checker::Checker()
{}

Checker::Checker(std::string line)
{
	_line = line;
}

Checker::~Checker()
{}

void Checker::check_alphanum(std::string line) const
{
	int flag = 0;
	for (size_t i = 0; i < line.length(); i++)
	{
		if (isdigit(line[i]))
		{
			if (flag == 0 || flag == 1)
				flag = 1;
			else
				throw Checker::Alphanumeric();
		}
		else if (isprint(line[i]))
		{
			if (flag == 0 || flag == 2)
				flag = 2;
			else
				throw Checker::Alphanumeric();
		}
	}
}

int Checker::is_nan(std::string line) const
{

	if (str == "inf" || str == "inff" || str == "-inf"
	|| str == "+inf" || str == "-inff" || str == "+inff"
	|| str == "nan" || str == "nanf")
		return (1);
	return (0);
}