#include <stdio.h>

/**
 * main - Entry point
 *
 * Desc: Prints alphabets in lowercase and uppercase letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a_z;

	for (a_z = 'a'; a_z <= 'z'; a_z++)
		putchar(a_z);
	for (a_z = 'A'; a_z <= 'Z'; a_z++)
		putchar(a_z);
	putchar('\n');
	return (0);
}
