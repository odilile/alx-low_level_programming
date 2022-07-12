#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: the first value entry
 * @b: the second value entry
 *
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
