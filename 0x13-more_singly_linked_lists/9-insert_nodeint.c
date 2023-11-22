#include "lists.h"

/**
 * insert_nodeint_at_index - funn
 * @head: param
 * @idx: param
 * @n: param
 * Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *tmp, *nxt;
	unsigned int i = 0;

	ptr->n = n;
	if (ptr == NULL)
		return (NULL);
	else if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	else
	{
		tmp = *head;
		nxt = (*head)->next;
		while (tmp->next != NULL)
		{
			if (i == idx - 1)
			{
				tmp->next = ptr;
				ptr->next = nxt;
				tmp = ptr;
			}
			tmp = tmp->next;
			nxt = nxt->next;
			i++;
		}
		if (i == idx - 1)
		{
			tmp->next = ptr;
			ptr->next = NULL;
		}
	}
	return (*head);
}
