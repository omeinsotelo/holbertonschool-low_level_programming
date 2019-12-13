#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - function that free a list
 * @head: the pointer
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	if (head  != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
