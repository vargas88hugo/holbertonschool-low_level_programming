#include "lists.h"

/**
 * free_dlistint - Function that frees a linked list
 * @head: Head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	for (; head;)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
