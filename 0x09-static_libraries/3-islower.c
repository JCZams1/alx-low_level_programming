#include "main.h"

/**
 * _islower - Checks for lowercase letters
 * @c: The character to be checked
 * Return: 1 for lowercase character else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
