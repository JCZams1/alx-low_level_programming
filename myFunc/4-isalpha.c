#include "main.h"

/**
 * _isalpha - checks for any alphabet character
 * @c: The char to be checked
 * Return: 1 for alphabetelse 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
