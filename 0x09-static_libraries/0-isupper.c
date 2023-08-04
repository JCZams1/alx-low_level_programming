#include "main.h"
/**
 * _isupper - checks uppercase letters
 * @c: character to be checked
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
