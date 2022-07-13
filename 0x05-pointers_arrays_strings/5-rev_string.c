#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int = 0, len = 0;
	char tmp;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] =s[len -i - 1];
		s[len - i - 1] = tmp;
	}
}
