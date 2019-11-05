#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a list
 * @head: Pointer to the structure
 * Return: value or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *copyhead;
	int value;

	if (*head != NULL)
	{
		copyhead = *head;
		value = (*head)->n;
		*head = (*head)->next;
		free(copyhead);
		return (value);
	}
	else
	{
		return (0);
	}
}
