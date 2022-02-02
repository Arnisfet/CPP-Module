//
// Created by arnisfet on 27.01.2022.
//

#ifndef CPP_0_HEADER_HPP
#define CPP_0_HEADER_HPP


# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>

class Contact {
private:
	int index;
	static std::string fields_name[11];
	static std::string information[11];

	enum strokes{
		FirstName = 0,
		LastName,
		Nickname,
		Number,
		Secret
	};
public:
	bool set_information(int index);
};

class Telephone
{
private:
	Contact contacts[11];
	int amount;
public:
	Telephone();
	void	add_contact(void);
};

#endif //CPP_0_HEADER_HPP
