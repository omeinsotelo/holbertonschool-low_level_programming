#include "lists.h"
/**
 * add_node_end - that adds a new node at the end of a list.
 * @head: the pointer to pointer
 * @str: poiter to string
 * Return: lista
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lista, *actual;
	unsigned int len;

	actual = *head;
	lista = malloc(sizeof(list_t));
	if (lista == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	lista->str = strdup(str);
	lista->len = len;
	lista->next = NULL;
	if (*head == NULL)
	{
		*head = lista;
		return (*head);
	}
	while (1)
	{
		if (actual->next == NULL)
		{
			actual->next = lista;
			break;
		}
		else
			actual = actual->next;
	}

	return (*head);
}
