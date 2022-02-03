#include "header.hpp"

std::string Contact::fields_name[11] = {
		"First Name",
		"LastName",
		"Nickname",
		"Phone",
		"Darkest Secret"
};

Contact Contact()
{}

void Contact::display_header()
{
	std::cout << "|" << std::setw(10) << this->index;
	for (int i = FirstName; i < Number; i++)
	{
		std::cout << "|";
		if (this->information[i].length() > 10)
			std::cout << this->information[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->information[i];
	}
	std::cout << "|" << std::endl;
}

void Contact::display(void)
{
	std::cout << "# Contact [" << this->index << "]" << std::endl;
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << Contact::fields_name[i] << ": ";
		std::cout << this->information[i] << std::endl;
	}
}

bool Contact::set_information(int index)
{
	int line  = 0;

	this->index = index;
	for (int i = FirstName; i < Secret + 1; i++)
	{
		std::cout << "# " << Contact::fields_name[i] << ":\n+";
		std::getline(std::cin, this->information[i]);
		line = this->information[i].length();
		if (line == 0)
		{
			std::cout << "Line is empty! Please try again!"<< std::endl;
			i--;
		}
	}
	std::cout << "# Contact added !" << std::endl;
	return (true);
}
