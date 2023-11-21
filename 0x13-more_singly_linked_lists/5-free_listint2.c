#include "lists.h"

/**
 * free_listint2 - function
 * @head: param
 */
void free_listint2(listint_t **head)
{
	listint_t *nextt;

	while (*head != NULL)
	{
		nextt = (*head)->next;
		free(*head);
		*head = nextt;
	}
	*head = NULL;
}
