#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node index
 * @head: Head of the linked list
 * @index: Index of the node
 * Return: The address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = head;
	for (i = 0; temp->next; i++)
		temp = temp->next;

	if (index > i)
		return (NULL);

	temp = head;
	for (; index > 0; index--)
		temp = temp->next;

	return (temp);
}
