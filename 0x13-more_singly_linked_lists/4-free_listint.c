#include "lists.h"

/**
 * free_listint - Function that frees a list
 * @head: beginning of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
