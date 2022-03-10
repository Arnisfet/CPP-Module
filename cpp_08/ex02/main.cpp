#include "Array.h"



int	main( void )
{
	Array<int>			intArray;
	Array<std::string>	stringArray(60);
	Array<std::string>	otherStringArray;

	for (size_t i = 0; i < stringArray.size(); i++)
	{
		stringArray[i] = "What";
		stringArray[i] = "a";
		stringArray[i] = "Good";
		stringArray[i] = "Day to";
		stringArray[i] = "Doing great thanks!";
		stringArray[i] = "You're very welcome";
	}
	std::cout << "intArray.size() = " << intArray.size() << std::endl;
	std::cout << "stringArray.size() = " << stringArray.size() << std::endl;
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
