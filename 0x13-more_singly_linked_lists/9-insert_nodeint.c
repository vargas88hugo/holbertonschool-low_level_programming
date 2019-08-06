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
	unsigned int i;
	listint_t *new = NULL;
	listint_t *temp = NULL;

	temp = (*head);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		temp = new;
		return (*head);
	}

	for (i = 1; i < idx; i++)
	{
		if (temp == NULL)
			return (NULL);

		if (temp->next == NULL && i == idx - 2)
		{
			temp->next = new;
			new->next = NULL;
			return (*head);
		}
		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (*head);
}
