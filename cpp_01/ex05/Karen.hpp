//
// Created by arnisfet on 06.02.2022.
//

#ifndef EX05_KAREN_HPP
#define EX05_KAREN_HPP

#include <iostream>

class Karen
{
private:
	void debug();
	void info();
	void warning();
	void error();
public:
	Karen();
	typedef void (Karen::*CALL_MEMBER_FUNC)();
	void complain(std::string level);
};

#endif //EX05_KAREN_HPP
