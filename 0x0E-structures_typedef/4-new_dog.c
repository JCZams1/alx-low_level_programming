#include "dog.h"

/**
 * _strlen - find string length
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copies string
 * @dest: destination string
 * @src: source string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(char) * (len1 + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (len2 + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	_strcpy(ndog->name, name);
	_strcpy(ndog->owner, owner);
	ndog->age = age;
	return (ndog);
}
