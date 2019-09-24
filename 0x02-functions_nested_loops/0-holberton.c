#include "holberton.h"
/**
* main - Entry point
* Write a program that prints Holberton, followed by a new line.
* Return: Always 0 (Success)
*/

int main(void)
{
char H[] = "Holberton";
int c = sizeof(H) - 1;
int p = 0;

for ( ; p < c; p++)
{
_putchar(H[p]);
}
_putchar('\n');
return (0);
}
