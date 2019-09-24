#include "holberton.h"
/**
*print_alphabet - func to print the alphabet
*
*Return: non
*/
void print_alphabet(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
