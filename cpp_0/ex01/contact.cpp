#include "header.hpp"

std::string Contact::fields_name[11] = {
		"First Name",
		"Nickname",
		"Phone",
		"Darkest Secret"
};

Contact Contact()
{}

bool Contact::set_information(int index)
{
	int length = 0;

	this->index = index;
	for (int i = FirstName; i < Secret; i++)
	{
		std::cout << "# " << Contact::fields_name[i] << ":\n+";
		std::getline(std::cin, this->information[i]);
	}
	for (int i = FirstName; i < Secret; i++)
		length += this->information[i].length();
	if (length == 0)
	{
		std::cout << "# Empty contact not added !" << std::endl;
		return (false);
	}
	std::cout << "# Contact added !" << std::endl;
	return (true);
}