#include "lists.h"

/**
 * free_list - fun
 * @head: param
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
