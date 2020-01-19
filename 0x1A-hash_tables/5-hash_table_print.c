#include "hash_tables.h"
/**
 * hash_table_print - print a table
 * @ht: table
 *
 * Return: is avoid
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int count = 0;
	char *comma = "";

	if (ht != NULL)
	{
		printf("{");
		for (count = 0; count < ht->size; count++)
		{
			current = ht->array[count];
			while (current != NULL)
			{
				printf("%s'%s': '%s'", comma, current->key, current->value);
				comma = ",";
				current = current->next;
			}
		}
		printf("}\n");
	}
}
