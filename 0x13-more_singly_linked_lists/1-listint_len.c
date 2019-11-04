#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: Pointer to the structure
 * Return: cont
 */
size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
