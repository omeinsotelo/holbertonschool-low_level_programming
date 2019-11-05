#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @head: Pointer to the structure
 * @n: value of member
 * Return: the address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *member = malloc(sizeof(listint_t));
	listint_t *actual = *head;

	if (member == NULL)
		return (NULL);

	member->n = n;
	member->next = NULL;
	if (*head == NULL)
	{
		*head = member;
		return (member);
	}
	while (1)
	{
		if (actual->next == NULL)
		{
			actual->next = member;
			break;
		}
		else
		{
			actual = actual->next;
		}
	}
	return (member);

}
