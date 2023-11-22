#include "lists.h"

/**
 * free_listint2 - function
 * @head: param
 */
void free_listint2(listint_t **head)
{
	listint_t *nextt;

	if (*head == NULL)
	{
		printf("Freed !");
	}
	else
	{
		while (*head != NULL)
		{
			nextt = (*head)->next;
			free(*head);
			*head = nextt;
		}
	}
	*head = NULL;
}
