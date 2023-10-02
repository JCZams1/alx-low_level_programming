#include <stdio.h>

/**
 * main - print program name
 * @argc: counts all the arguments
 * @argv: stores arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
