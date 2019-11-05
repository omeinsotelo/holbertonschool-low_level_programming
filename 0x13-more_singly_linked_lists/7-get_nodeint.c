#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list.
 * @head: Pointer to the structure
 * @index: index of the linked list
 * Return: node.:
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodo;
	unsigned int cont = 0;

	nodo = head;

	while (nodo != NULL)
	{
		if (index == cont)
		{
			return (nodo);
		}
		else
		{
			nodo = nodo->next;
			cont++;
		}
	}
	return (nodo);
}
