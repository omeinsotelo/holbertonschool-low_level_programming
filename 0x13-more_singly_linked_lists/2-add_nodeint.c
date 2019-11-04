#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: Pointer to the structure
 * @n: value of member
 * Return: the address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *member = malloc(sizeof(listint_t));

	if (member == NULL)
		return (NULL);

	member->n = n;
	member->next = *head;
	*head = member;
	return (member);
}
