#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: the pointer
 * Return: none
 */
size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			cont++;
		h = h->next;
	}
	return (cont);
}
