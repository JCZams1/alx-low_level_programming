#include <stdio.h>

/**
 * main - Entry point
 *
 * Desc: Prints alphabets in lowercase letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a_z = 'a';

	while (a_z <= 'z')
	{
		putchar(a_z);
		a_z++;
	}
	putchar('\n');
	return (0);
}
