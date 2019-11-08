#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: Pointer to the structure
 * @idx: index of the list where the new node should be added.
 * @n: value of element
 * Return: new
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = *head, *new;
	unsigned int cont = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (head == NULL)
	{

		if (idx == 0 || *head == NULL)
		{
			new->next = *head;
			*head = new;
			new->n = n;
			return (new);
		}
		while (p != NULL)
		{
			if ((idx - 1) == cont)
			{
				new->next = p->next;
				new->n = n;
				p->next = new;
				return (new);
			}
			p = p->next;
			cont++;
		}
	}
		free(new);
		return (NULL);
}
