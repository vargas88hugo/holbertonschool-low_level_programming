#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of the list
 * @head: beginning of the linked list
 * @n: number of the node
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);

	(*head) = new;

	return (*head);
}
