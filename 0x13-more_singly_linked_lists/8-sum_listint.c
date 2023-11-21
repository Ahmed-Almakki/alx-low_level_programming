#include "lists.h"

/**
 * sum_listint - fun
 * @head: param
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	int i;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		i = head->n;
		sum = sum + i;
		head = head->next;
	}
	return (sum);
}
