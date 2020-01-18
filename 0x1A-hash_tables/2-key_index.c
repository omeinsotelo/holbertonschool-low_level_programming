#include "hash_tables.h"

/**
 * key_index - create a key to store in table
 * @key: key val
 * @size: size of the table
 *
 * Return: key in the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
