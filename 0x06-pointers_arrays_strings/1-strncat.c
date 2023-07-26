#include "main.h"

/**
 * _strncat - concatenate 2 strings with byte limit
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + 1] = *src;
		src++;
	}
	dest[len + 1] = '\0';
	return (dest);
}
