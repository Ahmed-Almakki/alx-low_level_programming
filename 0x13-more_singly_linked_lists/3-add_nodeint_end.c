#include "lists.h"
/**
 * add_nodeint_end - fun
 * @head: param
 * @n: param
 * Return: l>st_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *tmp;

	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	       	tmp = (*head);
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = ptr;
	}
	return (*head);
}
