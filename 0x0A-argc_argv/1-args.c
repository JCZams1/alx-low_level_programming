#include <stdio.h>

/**
 * main - print number of arg passed
 * @argc: counts all the arguments
 * @argv: stores arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
