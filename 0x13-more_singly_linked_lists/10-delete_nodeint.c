#include "lists.h"
/**
 * delete_nodeint_at_index - function that delete a node
 * @head: Pointer to the structure
 * @index: index of the list
 * Return: 1, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head, *copy;
	unsigned int cont = 0;

	if (head != NULL && *head != NULL)
	{

		if (index == 0)
		{
			*head = p->next;
			free(p);
			return (1);
		}
		while (p != NULL)
		{
			if ((index - 1) == cont)
			{
				copy = p->next;
				p->next = copy->next;
				free(copy);
				return (1);
			}
			p = p->next;
			cont++;
		}
	}
		return (-1);
}
