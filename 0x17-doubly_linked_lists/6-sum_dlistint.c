#include "lists.h"

/**
 * sum_dlistint - Function that sums all the data of the linked list
 * @head: Head of the linked list
 * Return: Sum of the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
