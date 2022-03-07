//
// Created by arnisfet on 07.03.2022.
//

#ifndef EX01_ITER_H
#define EX01_ITER_H


template<typename T>
void	iter(T *array, int arraySize, void (*fctToExecute)(const T &))
{
	for (int i = 0; i < arraySize; i++)
		fctToExecute(array[i]);
}

#endif //EX01_ITER_H
