#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a list
 * @head: Beginning of the list
 * @index: index node of the list
 * Return: index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;

	for (i = 0; i < index; i++)
	{
		temp = temp->next;

		if (temp == NULL)
			return (NULL);
	}

	return (temp);
}
