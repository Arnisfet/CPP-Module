//
// Created by arnisfet on 03.03.2022.
//

#ifndef EX00_WHATEVER_H
#define EX00_WHATEVER_H

template <typename T>
void swap(T& value1, T& value2) {
	T buf;

	buf = value1;
	value1 = value2;
	value2 = buf;
}

template <typename T>
T&       min(T& value1, T& value2) {
	return (value1 < value2 ? value1 : value2);
}

template <typename T>
T&       max(T& value1, T& value2) {
	return (value1 > value2 ? value1 : value2);
}

#endif //EX00_WHATEVER_H
