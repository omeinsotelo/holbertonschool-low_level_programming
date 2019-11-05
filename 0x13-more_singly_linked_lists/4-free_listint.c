#include "lists.h"
/**
 * free_listint - function that frees a list.
 * @head: Pointer to the structure
 * Return: None
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
