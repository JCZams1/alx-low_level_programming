#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase
 * len: length of string
 * @c: pointer to string
 * Return: pointer to string
 */
char *string_toupper(char *c)
{
	int len = 0;

	while (c[len] != '\0')
	{
		if (c[len] >= 97 && c[len] <= 122)
		{
			c[len] = c[len] - 32;
		}
		len++;
	}
	return (c);
}
