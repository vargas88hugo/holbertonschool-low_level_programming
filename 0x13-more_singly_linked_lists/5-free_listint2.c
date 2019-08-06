#include "lists.h"

/**
 * free_listint2 - Function that frees a list and equal to NULL
 * @head: Beginning of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	while (head != NULL && (*head) != NULL)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
	}
}
