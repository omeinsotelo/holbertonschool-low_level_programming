#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a list
 * @head: Pointer to the structure
 * Return: value or 0
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
