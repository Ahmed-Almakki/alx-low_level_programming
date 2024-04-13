#include "hash_tables.h"
/**
 * key_index - ffunncttioon
 * @key: the e  keey
 * @size: the e  siizee
 * Return: inddx
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int indx;

	indx = hash_djb2((unsigned char *)key);
	return (indx % size);
}
