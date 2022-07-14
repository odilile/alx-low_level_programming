#include "main.h"

/**
 * _strcat - concatenates src to dest.
 * @dest: string to append to (destination).
 * @src: string to be appended (source).
 *
 * Return: dest(The concatenated string).
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len_dest = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len_dest + j] = src[j];
	}
	dest[len_dest + j] = '\0';

	return (dest);
}
