#include "holberton.h"
#include <stdio.h>
/**
 * set_string- Entry point
 * Description:  function that sets the value of a pointer to a char.
 * @s: This is teh poiter to one other poiter
 * @to: the ponter to be set
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
