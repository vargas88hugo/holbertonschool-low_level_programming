#include "lists.h"

/**
 * sum_listint - Function that return the sum of all the data
 * @head: Beginning of the list
 * Return: sum of the list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = NULL;
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
