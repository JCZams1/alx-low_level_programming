#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to address on new string, newStr
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	char *newStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	newStr = malloc(sizeof(char) * (len1 + len2) + 1);
	for (i = 0; s1[i] != '\0'; i++)
		newStr[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		newStr[i] = s2[i];
	return (newStr);
}
