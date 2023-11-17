#include "lists.h"
/**
 * add_node - fun
 * @head: param
 * @str: param
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr->str = strdup(str);
		ptr->len = strlen(str);
		ptr->next = *head;
		*head = ptr;
		return (*head);
	}
}
