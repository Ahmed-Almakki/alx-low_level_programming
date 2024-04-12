#include "hash_tables.h"

/**
 * hash_table_create - function
 * @size: parameter
 * Return: pointer of  struxter
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *tmp = malloc(sizeof(hash_table_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->size = size;
	tmp->array = malloc((sizeof(hash_node_t *)) * size);	
	for (i = 0; i < size; i++)
	{
		tmp->array[i] = NULL;
	}
	return (tmp);
}
