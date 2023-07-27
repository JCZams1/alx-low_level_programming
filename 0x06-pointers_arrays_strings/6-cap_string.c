#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to string
 * Return: s
 */
char *cap_string(char *s)
{
	int str_count = 0;

	while (s[str_count] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[str_count] == ' ' || s[str_count] == '\t' || s[str_count] == '\n'
				|| s[str_count] == ',' || s[str_count] == ';' || s[str_count] == '.'
				|| s[str_count] == '.' || s[str_count] == '|' || s[str_count] == '?'
				|| s[str_count] == '"' || s[str_count] == '(' || s[str_count] == ')'
				|| s[str_count] == '{' || s[str_count] == '}')
		{
			if (s[str_count + 1] >= 97 && s[str_count + 1] <= 122)
			{
				s[str_count + 1] = s[str_count] - 32;
			}
		}
		str_count++;
	}
	return (s);
}
