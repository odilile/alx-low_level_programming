#include "main.h"
#include <stdlib.h>
/**
 * create_array -> creating array of chars
 * @size: size of array
 * @c: character an array is initialized
 *
 * Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int a;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		arr[a] = c;

	return (arr);
}
