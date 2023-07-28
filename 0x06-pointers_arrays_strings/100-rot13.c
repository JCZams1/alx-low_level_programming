#include "main.h"

/**
 * rot13 - encodes a string with rot13
 * @s: pointer to string
 * Return: *s
 */
char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPWRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[i])
			{
				s[i] = datarot[i];
				break;
			}
		}
	}
	return (s);
}
