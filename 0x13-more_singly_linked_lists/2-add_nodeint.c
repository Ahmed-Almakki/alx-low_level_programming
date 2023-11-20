#include "lists.h"
/**
 * add_nodeint -fun
 * @head: param
 * @n: para
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
