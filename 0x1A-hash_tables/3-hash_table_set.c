#include "hash_tables.h"

/**
 * hash_table_set - add in the table
 * @ht: table
 * @key: key position in the array
 * @value: val
 *
 * Return: 1 success, 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_index = 0;
	hash_node_t *new_node = NULL, *current_node = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);

	hash_index = key_index((const unsigned char *) key, (*ht).size);
	current_node = (*ht).array[hash_index];
	while (current_node != NULL)
	{
		if (strcmp(key, (*current_node).key) == 0)
		{
			free((*current_node).value);
			(*current_node).value = strdup(value);
			return (1);
		}
		current_node = (*current_node).next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	(*new_node).value = strdup(value);
	(*new_node).key = (char *) key;
	(*new_node).next = (*ht).array[hash_index];
	(*ht).array[hash_index] = new_node;
	return (1);
}
