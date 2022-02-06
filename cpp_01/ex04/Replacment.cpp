//
// Created by arnisfet on 06.02.2022.
//

#include <iosfwd>
#include "Replacment.hpp"

Replace::Replace(const std::string &name, const std::string &s1, const std::string
&s2)
{
	_filename = name;
	_s1 = s1;
	_s2 = s2;
	std::cout << "Initialise of values!" << std::endl;
}

void Replace::swap()
{
	std::string line, stream;
	std::ifstream read(_filename.c_str());
	std::ofstream ofs;

	if (!read)
	{
		std::cerr << "File couldn't oppenning or reading!" << std::endl;
		exit (1);
	}
	while (getline(read, line))
	{
		checkLine(line);
		stream.append(line);
	}
	ofs.open(_filename.append(".replace").c_str(), std::ios::out);
	if (!ofs)
	{
		std::cerr << "File couldn't oppenning or reading!" << std::endl;
		exit (1);
	}
	ofs << stream;
	read.close();
	ofs.close();
}

void Replace::checkLine(std::string &line)
{
	std::string::size_type itr = line.find(_s1);
	while (itr != std::string::npos)
	{
		line.erase(itr, _s1.length());
		line.insert(itr, _s2);
		itr = line.find(_s1);
	}
}