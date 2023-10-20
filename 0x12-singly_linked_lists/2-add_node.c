#include "lists.h"

/**
 * add_node -  Adds a new node at the beginning of a list_t list.
 *
 * @head: A pointer to the head of the list_t list.
 *
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL else return new addr.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *buy;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	buy = strdup(str);
	if (buy == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = buy;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
