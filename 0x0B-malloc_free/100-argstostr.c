#include "main.h"

/**
 * argstostr - concatenate function arguments
 * @ac: first argument
 * @av: double array pointer
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, n;
	int l = 0;
	int r = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		if (str[r] == '\0')
			str[r++] = '\n';
	}
	return (str);
}
