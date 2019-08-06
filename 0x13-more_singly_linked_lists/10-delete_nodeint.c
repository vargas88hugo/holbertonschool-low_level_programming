#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node of the list
 * @head: beginning of the list
 * @index: index should be deleted
 * Return: 1 if it succeeded or -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp1;
	listint_t *temp2;

	if (head == NULL)
		return (-1);

	temp1 = (*head);

	if (index == 0)
	{
		if (temp1 == NULL)
			return (-1);
		temp1 = (*head);
		(*head) = (*head)->next;
		free(temp1);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		if (temp1 == NULL)
			return (-1);

		temp1 = temp1->next;
	}

	temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);

	return (1);
}
