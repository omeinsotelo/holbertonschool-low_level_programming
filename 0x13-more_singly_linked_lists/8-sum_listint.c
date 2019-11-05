#include "lists.h"
/**
 * sum_listint - function that returns the nth node of a list.
 * @head: Pointer to the structure
 * Return: plus
 */
int sum_listint(listint_t *head)
{
	int plus = 0;

	while (head != NULL)
	{
		plus += head->n;
		head = head->next;
	}
	return (plus);
}
