#include "main.h"

/**
 * _strdup - copies string to a new space
 * @str: string to copy
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	int i;
	char *ptrStr;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	ptrStr = malloc(count * sizeof(char) + 1);
	if (ptrStr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptrStr[i] = str[i];
	return (ptrStr);
}
