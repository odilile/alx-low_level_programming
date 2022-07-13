#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 *         starting with the first character, followed
 *         by a new line.
 * @str: String Pointer.
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; *(str + i) != '\0' ; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
