#include "main.h"

/**
 * leet - encode a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: string considered
 * len: string length
 * Return: s
 */
char *leet(char *s)
{
	int len, leetCount;
	char letters[] = "aAeEoOtTiL";
	char leetNums[] = "4433007711";

	len = 0;
	while (s[len] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (letters[leetCount] == s[len])
			{
				s[len] = leetNums[leetCount];
			}
			leetCount++;
		}
		len++;
	}
	return (s);
}
