//
// Created by arnisfet on 04.02.2022.
//

#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	std::string const &getType() const;
	void setType(std::string tmpType);
};

#endif //EX03_WEAPON_HPP