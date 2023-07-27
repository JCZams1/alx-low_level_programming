#include "main.h"

/**
 * reverse_array - reverses the array integers
 * @a: ponter to array
 * @n: number of element of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		temp = a[count];
		a[count++] = a[n];
		a[n--] = temp;
	}
}
