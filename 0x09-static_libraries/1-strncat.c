#include "main.h"

/**
 * _strncat - concatenates src to dest.
 * @dest: string to append to (destination).
 * @src: string to be appended (source).
 * @n: number of bytes to be used.
 *
 * Return: dest(the concatenated string).
 */
char *_strncat(char *dest, char *src, int n)
{

	int i, j, len_dest = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			dest[len_dest + j] = src[j];
		}
	}
	*(dest + (len_dest + j)) = '\0';
	return (dest);
}
