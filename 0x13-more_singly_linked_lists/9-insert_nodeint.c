#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at a position
 * @head: Beginning of the list
 * @idx: Index when insert a new node
 * @n: Number to be insert
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, count;
	listint_t *new = NULL;
	listint_t *temp = NULL;

	temp = (*head);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	for (count = 0; temp != NULL; count++)
		temp = temp->next;

	temp = (*head);

	if (idx > count)
	{
		return (NULL);
	}
	else if (idx == count)
	{
		new->next = NULL;

		while (temp != NULL)
			temp = temp->next;

		temp->next = new;

		return (*head);
	}
	else if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
	}

	for (i = 1; i < idx; i++)
		temp = temp->next;

	new->next = temp->next;
	temp->next = new;

	return (*head);
}
