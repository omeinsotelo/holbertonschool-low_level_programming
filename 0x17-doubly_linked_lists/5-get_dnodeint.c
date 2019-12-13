#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: the pointer
 * @index: index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nodo;
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
