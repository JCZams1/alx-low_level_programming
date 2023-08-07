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

	ptrArray = malloc(size * sizeof(char));
	for (count = 0; count < size; count++)
	{
		ptrArray[count] = c;
	}
	return (ptrArray);
}
