//
// Created by arnisfet on 17.02.2022.
//

#ifndef EX01_BRAIN_H
#define EX01_BRAIN_H

#include <iostream>
#include <string>

class Brain{
private:
	static const int	numberOfIdeas = 100;

public:
	Brain();
	Brain( const Brain &src );
	~Brain( void );

	Brain	&operator=( const Brain &other );
	std::string		ideas[Brain::numberOfIdeas];
		};


#endif //EX01_BRAIN_H
