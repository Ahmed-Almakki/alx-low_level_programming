#include "lists.h"

/**
 * get_nodeint_at_index - fun
 * @head: param
 * @index: param
 * Return: lisint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		if (i == index)
		{
			return (tmp);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
