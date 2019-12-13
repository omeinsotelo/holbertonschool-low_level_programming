#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint- returns the sum of all the data (n) of a list
 * @head: the pointer
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int plus = 0;

	while (head != NULL)
	{
		plus += head->n;
		head = head->next;
	}
	return (plus);
}
