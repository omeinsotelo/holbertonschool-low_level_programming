#include "holberton.h"
/**
*print_sign - print the sing of a number
*@n: The numbers with sing
*Return: 1 and print + if n > 0, 1 and 0 if n == 0 and -1 and - if n < 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
