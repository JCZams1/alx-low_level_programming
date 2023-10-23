#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list.
 * @head: a pointer to the address of the head of
 * the listint_t list.
 *
 * Return: if the linked list is empty - 0.
 * otherwise - the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);

	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (ret);
}
