#include "lists.h"

/**
 * free_list - Function that frees linked list
 * @head: Beginning of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *point = NULL;

	while (head)
	{
		point = head;
		head = head->next;
		free(point->str);
		free(point);
	}

}
