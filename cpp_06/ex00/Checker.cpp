//
// Created by arnisfet on 28.02.2022.
//

#include <string>
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
	long long int flag = 0;

	flag = std::atof(line.c_str());
	if (flag || line[0] == '0' || (std::isprint(line[0]) && !line[1]))
		return;
	throw Error("Alphanumeric and strings are forbidden!\n");
}

int Checker::is_nan(const std::string& line) const
{

	if (line == "inf" || line == "inff" || line == "-inf"
	|| line == "+inf" || line == "-inff" || line == "+inff"
	|| line == "nan" || line == "nanf")
		return (1);
	return (0);
}

void Checker::outputChar(std::string line) const
{
	char tmp;

	if (line.length() == 1 && std::isprint(line[0]) && !std::isdigit(line[0]))
		std::cout << "char: '" << line[0] << "'" << std::endl;
	else
	{
		try {
			tmp = static_cast<char>(atof(line.c_str()));
			if (tmp > 31 && tmp < 127)
				std::cout << "char: '" << tmp << "'" << std::endl;
			else
				throw Error("char: Non Displayble");
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}

void Checker::outputInt(std::string line) const
{
	long long int tmp;
	if (line.length() == 1 && std::isprint(line[0]) && !std::isdigit(line[0]))
	{
		tmp = static_cast<int>(line[0]);
		std::cout << "int: '" << tmp << "'" << std::endl;
	}
	else
	{
		try {
			if (!std::isdigit(line[1]) && line[1] != 'f' && line[1] != '.' && !std::isdigit(line[0]))
				throw Error("int: impossible");
			tmp = static_cast<int>(atof(line.c_str()));
			std::cout << "int: " << tmp << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "int: " << e.what() << std::endl;
		}
	}
}

void Checker::outputFloat(std::string line) const
{
	float tmp;

	std::cout.precision(1);
	if (line.length() == 1 && std::isprint(line[0]) && !std::isdigit(line[0]))
	{
		tmp = static_cast<float>(line[0]);
		std::cout << "float: " << std::fixed << tmp << "f" << std::endl;
	}
	else
	{
		try
		{
			if (!std::isdigit(line[1]) && line[1] != 'f' && line[1] != '.' && !std::isdigit(line[0]))
				throw Error("float: impossible");
			tmp = static_cast<float>(atof(line.c_str()));
			std::cout << "float: " << std::fixed << tmp << "f" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}

void Checker::outputDouble(std::string line) const
{
	double tmp;

	if (line.length() == 1 && std::isprint(line[0]) && !std::isdigit(line[0]))
	{
		tmp = static_cast<float>(line[0]);
		std::cout << "double: " << std::fixed << tmp << "f" << std::endl;
	}
	else
	{
		try
		{
			if (!std::isdigit(line[1]) && line[1] != 'f' && line[1] != '.' && !std::isdigit(line[0]))
				throw Error("double: impossible");
			tmp = static_cast<float>(atof(line.c_str()));
			std::cout << "double: " << std::fixed << tmp << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}

void Checker::shit_cases(const std::string line)
{
	for (int i = 0; line[i]; i++)
	{
		if (line[i] == '.')
			for (int j = i + 1; line[j]; j++){
				if (std::isprint(line[j]) && !std::isdigit(line[j]) &&
				line[j] !='f')
					throw Error("Good plan, but is also forbidddden");
			}
		if (std::isalpha(line[i]) && line[i] != '.')
			for (int j = i + 1; line[j]; j++)
			{
				if (std::isprint(line[j]) || std::isdigit(line[j]))
					throw Error("Good plan, but is also forbidden");
			}
	}
	if (line[0] == '0')
		for (int i = 0; line[i]; i++)
		{
			if (line[i+1] && (line[i+1] != '0' || line[i] != '\0'))
				throw Error("Good plan, but this uncorrect number");
		}
}