#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of bytes
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int lens1 = 0;
	unsigned int lens2 = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		lens1++;
	for (i = 0; s2[i] != '\0'; i++)
		lens2++;

	output = malloc(sizeof(char) * (lens1 + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= lens2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			output[lens1 + i] = s2[i];
		output[lens1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; i < n; i++)
			output[lens1 + i] = s2[i];
		output[lens1 + i] = '\0';
	}
	return (output);
}
