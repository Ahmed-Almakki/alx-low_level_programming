#include "lists.h"
/**
 * print_dlistint - func
 * @h: pointer
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
