#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - natural numbers from n to 98..
*@n: The parameter
* Return: none
*/
void print_to_98(int n)
{
	int p;

	if (n > 98)
	{

		for (p = n; p >= 98; p--)
		{
			if (p != 98)
				printf("%d, ", p);
			else
				printf("%d", p);
		}
	}
	else
	{

		for (p = n; p <= 98; p++)
		{
			if (p != 98)
				printf("%d, ", p);
			else
				printf("%d", p);
		}
	}
	printf("\n");

}
