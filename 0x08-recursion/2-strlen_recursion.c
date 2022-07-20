#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: Pointer of string.
 * Return: length of the string, 0 otherwise.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
