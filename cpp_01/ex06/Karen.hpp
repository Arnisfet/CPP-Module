//
// Created by arnisfet on 07.02.2022.
//

#ifndef EX06_KAREN_HPP
#define EX06_KAREN_HPP

#include <iostream>

class Karen {

public:

	Karen();
	void complain( std::string level );
	int getLevel(std::string level);

private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif //EX06_KAREN_HPP
