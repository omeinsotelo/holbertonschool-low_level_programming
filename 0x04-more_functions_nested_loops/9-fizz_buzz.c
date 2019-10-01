#include <stdio.h>
#include "holberton.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int m;
	int p;
		for (n = 0; n < 10; n++)
		{
			for (m = 0; m < 10; m++)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				for (p = 0; p < 10; p++)
					{
						putchar((n / 10) + '0');
						putchar((n % 10) + '0');
					}
			}
		putchar((n / 10) + '0');
		putchar('\n');
		}
	return (0);
}
