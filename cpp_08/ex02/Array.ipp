//
// Created by arnisfet on 07.03.2022.
//

#include "Array.h"

template<typename T>
Array<T>::Array():
length(0), elts(NULL)
{
}

template<typename T>
Array<T>::Array(int n):
length(0), elts(NULL)
{
	if (n > 0)
	{
		length = (size_t)n;
		this->elts = new T[length]();
	}
	else
		this->elts = new T[length]();
}

template<typename T>
Array<T>::Array(Array const &other):
length(0), elts(NULL)
{
	if (other.length > 0)
	{
		this->elts = new T[other.length]();
		for (size_t i = 0; i < other.length; i++)
			this->elts[i] = other.elts[i];
	}
	this->length = other.length;
}

template<typename T>
Array<T>::~Array()
{
	if (this->length > 0)
		delete[] this->elts;
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return "ArrayException: index out of bounds";
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &other)
		{
	if (this->length > 0)
		delete[] this->elts;
	this->elts = NULL;
	if (other.length > 0)
	{
		this->elts = new T[other.length]();
		for (size_t i = 0; i < other.length; i++)
			this->elts[i] = other.elts[i];
	}
	this->length = other.length;
	return (*this);
}

template<typename T>
T &Array<T>::operator[](size_t index)
{
	if (index >= this->length)
		throw Array::OutOfBoundsException();
	return (this->elts[index]);
}

template<typename T>
T const &Array<T>::operator[](size_t index) const
{
	return (operator[](index));
}

template<typename T>
size_t Array<T>::size(void) const
{
		return (this->length);
}