#include "main.h"

/**
 * _calloc - allocates memory space using caloc
 * @nmemb: number of array elements
 * @size: size of array
 * Return: poibter to the new memory space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *op;

	if (nmemb == 0 || size == 0)
		return (NULL);
	op = calloc(nmemb, size);
	if (op == NULL)
		return (NULL);
	else
		return (op);
}
