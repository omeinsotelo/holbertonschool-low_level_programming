#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: the pointer to a poiter
 * @n: constant integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *cont = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (cont)
	{
		if (cont->next == NULL)
		{
			cont->next = new;
			new->prev = cont;
			new->next = NULL;
			return (new);
		}
		cont = cont->next;
	}
	return (new);
}
