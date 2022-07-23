#include <stdlib.h>
#include <stdio.h>

/**
 * main - write a program that prints its name, followed by new line.
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: 0 (success).
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
