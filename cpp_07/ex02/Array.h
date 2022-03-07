//
// Created by arnisfet on 07.03.2022.
//

#ifndef EX02_ARRAY_H
#define EX02_ARRAY_H


# include <exception>
# include <cctype>
#include <iostream>
#include <cstdlib>

template<typename T>
class Array
		{
		private:
			size_t length;
			T *elts;
		public:
			Array();
			Array(size_t n);
			Array(Array<T> const &other);
			virtual ~Array();

			class OutOfBoundsException: public std::exception {
				virtual const char* what() const throw();
			};

			Array &operator=(Array const &other);
			T &operator[](size_t index);
			T const &operator[](size_t index) const;

			size_t size(void) const;
		};

# include "Array.ipp"

#endif //EX02_ARRAY_H
