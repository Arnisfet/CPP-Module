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
	static std::string fields_name[8];
	std::string information[8];

	enum strokes{
		FirstName = 0,
		LastName,
		Nickname,
		Number,
		Secret
	};
public:
	bool set_information(int index);
	void display_header();
	void display();
};

class Telephone
{
private:
	Contact contacts[11];
	int amount;
public:
	Telephone();
	void	add_contact(void);
	void	search_contact(void);
	void	search_header(void);
};

#endif //CPP_0_HEADER_HPP
