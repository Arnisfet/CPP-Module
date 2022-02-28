//
// Created by arnisfet on 27.02.2022.
//

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form(false, "ShrubberyCreationForm", 145, 137, target)
{
	std::cout << "Default constructor for ShrubberyCreationForm!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &sh) : Form(sh)
{
	std::cout << "Default copy constructor for ShrubberyCreationForm!\n";

}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Default destructor for ShrubberyCreationForm!\n";

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &sh)
{
	std::cout << "Default assignment operator for ShrubberyCreationForm!\n";
	if (this == &sh)
		return (*this);
	Form::operator=(sh);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream file;

	file.open(std::string(this->getTarget() + "_shrubbery").c_str(),
			  std::ios::out	| std::ios::app);
	if(file.is_open())
	{
		file << "          .     .  .      +     .      .          ." << std::endl;
		file << "     .       .      .     #       .           ." << std::endl;
		file << "        .      .         ###            .      .      ." << std::endl;
		file << "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
		file << "          .      . \"####\"###\"####\"  ." << std::endl;
		file << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
		file << "  .             \"#########\"#########\"        .        ." << std::endl;
		file << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
		file << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
		file << "                .\"##\"#####\"#####\"##\"           .      ." << std::endl;
		file << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
		file << "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
		file << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
		file << "            .     \"     000      \"    .     ." << std::endl;
		file << "       .         .   .   000     .        .       ." << std::endl;
		file << ".. .. ..................O000O........................ ...... ..." << std::endl;
		file.close();
	}
	else
		std::cout << "Problem with ofstream!\n";
}