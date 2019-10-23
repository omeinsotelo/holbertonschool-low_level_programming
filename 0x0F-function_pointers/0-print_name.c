#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - pointer to a function prints name
 * @name: name 
 * @f: pointer to a function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *));
{
	if (name && f)
	f(name);
}
