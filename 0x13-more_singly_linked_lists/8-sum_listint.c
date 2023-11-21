#include "lists.h"

/**
 * sum_listint - fun
 * @head: param
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
	}
	return (sum);
}
