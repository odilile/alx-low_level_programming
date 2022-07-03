#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int 9;
	char n;

	for (n = '0'; n < 10; n++)
		putchar((n % 10) + '0')

	for (n = 'a'; n <= 'f'; n++)
		putchar(n);

	putchar('\n');

	return (0);
}
