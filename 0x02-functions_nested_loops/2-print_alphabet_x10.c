#include "main.h"

/**
 * Print_alphabet_x10 - function to print abc 10 times
 *
 * Return: Always 0(Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		int c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
