#include "Array.h"



int	main( void )
{
	Array<int>			intArray;
	Array<std::string>	stringArray(10);
	Array<std::string>	otherStringArray;

	stringArray[0] = "What";
	stringArray[1] = "a";
	stringArray[2] = "Good";
	stringArray[3] = "Day to";
	stringArray[4] = "Doing great thanks!";
	stringArray[5] = "You're very welcome";
	std::cout << "intArray.size() = " << intArray.size() << std::endl;
	std::cout << "stringArray.size() = " << stringArray.size() << std::endl;
	otherStringArray = stringArray;
	otherStringArray[3] = "I'm good, how about you?";
	std::cout << otherStringArray[3] << std::endl;
	std::cout << otherStringArray[5] << std::endl;

	try
	{
		std::cout << stringArray[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << stringArray[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
