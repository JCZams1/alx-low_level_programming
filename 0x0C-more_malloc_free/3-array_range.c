#include "main.h"

/**
 * array_range - creates array of integers
 * @min: minimum number in array set
 * @max: maximum number in array set
 * Return: new memory space
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *output;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		output[i] = min++;
	return (output);
}
