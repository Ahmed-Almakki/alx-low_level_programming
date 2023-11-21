#include "lists.h"
/**
 * pop_listint - fun
 * @head: param
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *pop;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		pop = (*head);
		temp = (*head)->next;
		*head = temp;
		return ((pop)->n);
	}
}
