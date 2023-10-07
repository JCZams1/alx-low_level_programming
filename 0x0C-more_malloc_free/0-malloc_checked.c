#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 * Return: pointer to the new allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *op;

	op = malloc(b);
	if (op == NULL)
		exit(98);
	else
		return (op);
}
