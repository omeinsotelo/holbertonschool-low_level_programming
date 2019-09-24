#include "holberton.h"
#include <stdlib.h>
/**
* print_last_digit - prints the last digit of a number
* @n: the inger number
*
* Return: lastDigit;
*/
int print_last_digit(int n)
{
int lastDigit;
lastDigit = abs(n % 10);
_putchar(lastDigit + '0');
return (lastDigit);
}
