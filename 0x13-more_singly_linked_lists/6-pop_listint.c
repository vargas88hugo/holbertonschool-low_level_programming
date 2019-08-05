#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a list
 * @head: Beginning of the list
 * Return: The head nodes
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int tmp;

	if ((*head) == NULL)
	{
		return (0);
	}
	else
	{

		tmp = (*head)->n;

		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
	}

	return (tmp);
}
