//
// Created by arnisfet on 03.03.2022.
//

#ifndef EX00_EASYFIND_H
#define EX00_EASYFIND_H

#include <algorithm>
#include <deque>
#include <iostream>
#include <list>
#include <string>
#include <vector>


class FailToFindException : public std::exception {
	const char *what() const throw() { return "Fail to find in container"; }
};

template <typename T>
typename T::iterator easyfind(T &container, int val) {
	typename T::iterator res = std::find(container.begin(), container.end(), val);
	if (res == container.end())
	{
		throw FailToFindException();
	}
	return res;
}


#endif //EX00_EASYFIND_H
