#include "lists.h"

void delete_ini(dlistint_t **head);

void delete_end(dlistint_t **head);

/**
 * delete_dnodeint_at_index - Function that removes a node at a specific index
 * @head: Head of the linked list
 * @index: Index where the new node should be added
 * Return: 1 if it succeeded and -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL, *tmp2 = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	for (i = 0; temp->next; i++)
		temp = temp->next;

	if (index == 0)
	{
		delete_ini(head);
		return (1);
	}
	else if (index == i)
	{
		delete_end(head);
		return (1);
	}
	else if (index > i)
		return (-1);

	for (; i != index - 1; i--)
		temp = temp->prev;

	temp->next->next->prev = temp;
	tmp2 = temp->next;
	temp->next = temp->next->next;
	free(tmp2);
	tmp2 = NULL;

	return (1);
}

/**
 * delete_ini - Function that removes a node at the beginning
 * @head: Head of the linked list
 */
void delete_ini(dlistint_t **head)
{
	dlistint_t *temp = NULL;

	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return;
	}

	temp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
	temp = NULL;
}

/**
 * delete_end - Function that removes a node at the end
 * @head: Head of the linked list
 */
void delete_end(dlistint_t **head)
{
	dlistint_t *temp = NULL, *tmp2 = NULL;

	temp = *head;
	for (; temp->next->next;)
		temp = temp->next;

	tmp2 = temp->next;
	temp->next = NULL;
	free(tmp2);
	tmp2 = NULL;
}
