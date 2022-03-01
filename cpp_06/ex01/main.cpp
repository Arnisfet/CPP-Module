#include <iostream>
#include <stdint.h>

typedef struct  s_data {
	int         num;
	std::string str;
}               Data;

uintptr_t   serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*       deserialized(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

int     main() {
	Data data;
	Data *result;

	data.num = 2142;
	data.str = "Hello World!\n";
	result = deserialized(serialize(&data));
	std::cout << result->str << result->num << std::endl;

	return (0);
}