//
// Created by arnisfet on 04.02.2022.
//

#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP

#include <iostream>


class Weapon {

public:

	Weapon();
	explicit Weapon(std::string const & type);
	~Weapon();

	std::string const &getType() const;
	void setType(const std::string &type);

private:

	std::string _type;
};

#endif //EX03_WEAPON_HPP