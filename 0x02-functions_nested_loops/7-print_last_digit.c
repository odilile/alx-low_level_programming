#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: first parameter.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
		ld = ld * -1;

	_putchar(ld + '0');
	return (ld);
}
