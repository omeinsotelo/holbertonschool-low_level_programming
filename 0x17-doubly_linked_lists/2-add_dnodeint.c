#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @h: the pointer
 * @n: constant integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	
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
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
