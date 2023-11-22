#include "lists.h"

/**
 * om - fun
 * @ptr:param
 * @head: param
 * @idx: param
 * Return: list
 */
listint_t *om(listint_t *ptr, listint_t *head, unsigned int idx)
{
	listint_t *tmp, *nxt;
	unsigned int i = 0;

	tmp = head;
	nxt = head->next;
	while (tmp->next != NULL)
	{
		if (i == idx - 1)
		{
			tmp->next = ptr;
			ptr->next = nxt;
			break;
		}
		tmp = tmp->next;
		nxt = nxt->next;
		i++;
	}
	return (*head);
}

/**
 * insert_nodeint_at_index - funn
 * @head: param
 * @idx: param
 * @n: param
 * Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint *ptr = malloc(sizeof(listint_t));
	listint_t *tmp, *nxt;
	listint_t *lst = *head;
	unsigned int j = 0;

	ptr->n = n;
	if (ptr == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
		j++;
	}
	if (j == idx - 1)
	{
		lst->next = ptr;
		ptr->next = NULL;
		return (*head);
	}
	else if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (*head);
	}
	*head = om(ptr, head, idx);
	return (*head);
}
