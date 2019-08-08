#include "lists.h"

/**
 * print_listint_safe - Function that prints a linked list
 * @head: Beginning of the list
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0, j = 0, k = 0, bool = 0;
	listint_t *slow = (listint_t *)head, *fast = (listint_t *)head, *temp;

	while (slow && fast && fast->next)
	{
		slow = slow->next, fast = fast->next->next;
		if (slow == fast)
		{
			bool = 1;
			break;
		}
	}
	if (bool == 1)
	{
		for (j = 1; fast->next != slow; j++)
			fast = fast->next;
		slow = (listint_t *)head, fast = (listint_t *)head;
		for (; k < j; k++)
			fast = fast->next;
		while (1)
		{
			fast = fast->next;
			slow = slow->next;
			if (fast->next == slow->next)
			{
				temp = slow->next, fast->next = NULL;
				break;
			}
		}
	}
	while (head)
	{
		(head == NULL) ? exit(98) : head;
		printf("[%p] %d\n", &(head->n), head->n);
		head = head->next, i++;
	}
	(bool == 1) ? printf("-> [%p] %d\n", &(temp->n), temp->n) : bool;
	return (i);
}
