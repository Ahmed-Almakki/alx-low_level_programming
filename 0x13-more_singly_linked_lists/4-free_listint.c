#include "lists.h"
/**
 * free_listint - fun
 * @head: param
 */

void free_listint(listint_t *head)
{
	listint_t *nextt;

	while (nextt != NULL)
	{
		nextt = head->next;
		free(nextt);
	}
}
