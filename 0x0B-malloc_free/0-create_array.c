#include "main.h"

/**
 * create_array - crrates array and initialize with a character
 * @size: array size
 * @c: character to be initialized
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ptrArray;
	unsigned int count;

	if (size == 0)
		return (NULL);
	ptrArray = malloc(size * sizeof(char));
	if (ptrArray == 0)
		return (NULL);
	for (count = 0; count < size; count++)
		ptrArray[count] = c;
	return (ptrArray);
}
