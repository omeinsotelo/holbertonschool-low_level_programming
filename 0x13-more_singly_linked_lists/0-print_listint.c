#include "lists.h"
/**
 * print_listint - function that prints all the elements of a list.
 * @h: Pointer to the structure
 * Return: cont
 */
size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
