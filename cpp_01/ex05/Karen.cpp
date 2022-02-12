//
// Created by arnisfet on 06.02.2022.
//

#include "Karen.hpp"

Karen::Karen()
{
	std::cout << "Crybaby Karen was born!" << std::endl;
}

Karen::~Karen()
{
	std::cout << "Crybaby Karen lost!" << std::endl;
}

void Karen::debug()
{
	std::cout << "DEBUG: " << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info()
{
	std::cout << "INFO: " << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning()
{
	std::cout << "WARNING: " << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error()
{
	std::cout << "ERROR: " << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	std::string functions[] = { std::string("debug"), std::string("info"),
								std::string("warning"), std::string("error") };
	CALL_MEMBER_FUNC actionsPool[] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	for (int i = 0; i<4; ++i)
		if (level == functions[i])
			(this->*actionsPool[i])();
}