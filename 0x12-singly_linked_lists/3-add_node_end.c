#include "lists.h"
/**
 * add_node_end - fun
 * @head: param
 * @str: param
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *ptr = malloc(sizeof(list_t));

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
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
}
