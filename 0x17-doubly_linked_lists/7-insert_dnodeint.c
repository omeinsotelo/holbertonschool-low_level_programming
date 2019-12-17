#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the pointer
 * @idx: index of the list where the new node should be added
 * @n: value of element
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p = *h, *new;
	unsigned int cont = 1;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx > 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (p != NULL && cont < idx)
	{
		p = p->next;
		cont++;
	}
	if (p == NULL)
		return (NULL);
	if (p->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	(p->next)->prev = new;
	new->next = p->next;
	new->prev = p;
	p->next = new;
	return (new);
}
