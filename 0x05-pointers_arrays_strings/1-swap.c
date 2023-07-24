#include "main.h"

/**
 * swap_int - swap two integers
 * @a: 1st value
 * @b: 2nd value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
