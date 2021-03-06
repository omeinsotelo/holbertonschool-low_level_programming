#include "lists.h"
/**
 * free_listint2 - function that frees a list.
 * @head: Pointer to the structure
 * Return: None
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		*head = NULL;
	}
}
