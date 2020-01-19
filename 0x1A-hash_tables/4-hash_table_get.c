#include "hash_tables.h"

/**
 * hash_table_get - get the value with the key
 * @ht: table
 * @key: key to search
 *
 * Return: return the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current = NULL;


	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	else
	{
		index = key_index((const unsigned char *) key, (*ht).size);
		current = ht->array[index];
		while (current != NULL)
		{
			if (strcmp(current->key, (char *)key) == 0)
				return (current->value);
			current = current->next;
		}
		return (NULL);
	}
}
