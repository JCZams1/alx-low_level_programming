#include "main.h"

/**
 * _strncat - concatenate 2 strings with byte limit
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of bytes
 * Return: pointer to dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int z, length_of_string = 0;

	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, length_of_string++)
	{
		dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
