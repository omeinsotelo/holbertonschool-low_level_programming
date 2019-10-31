#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list.
 * @head: the pointer to pointer
 * @str: poiter to string
 * Return: 
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lista;
	unsigned int len;

	lista = malloc(sizeof (list_t));
	if (lista == NULL)
		return(NULL);
	
	for (len = 0; str[len] != '\0'; len++)
		;
	lista-> str = strdup(str);
	lista-> len = len;
	lista-> next = *head;
	*head = lista;
	return(lista); 	

}
