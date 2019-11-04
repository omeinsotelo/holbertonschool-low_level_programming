#include "lists.h"
/**
 * print_listint - function that prints all the elements of a list.
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
