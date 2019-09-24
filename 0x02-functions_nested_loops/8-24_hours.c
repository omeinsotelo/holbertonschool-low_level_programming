#include "holberton.h"
#include <stdlib.h>
/**
* jack_bauer - prints every minute of the day of Jack Bauer
* @n: the minutes
*
* Return: 0;
*/
void jack_bauer(void)
{
int n;
int m;

for (n = 0; n <= 23; n++)
{
for (m = 0; m <= 59; m++)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
}
