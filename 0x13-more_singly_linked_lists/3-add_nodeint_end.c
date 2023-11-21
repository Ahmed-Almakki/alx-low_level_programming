#include "lists.h"
/**
 * add_nodeint_end - fun
 * @head: param
 * @n: param
 * Return: lst_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = ptr;
	}
	return (ptr);
}
