#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that executes a function given as a
 * parameter on each element of an array.
 * @array: input integer array.
 * @size: This is the size of the array.
 * @action: pointer to the function.
 *
 * Return: no return.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array != NULL && action != NULL)
	for (j = 0; j < size; j++)
		(action(array[j]));
}
