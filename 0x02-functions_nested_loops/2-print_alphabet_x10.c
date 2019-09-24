#include "holberton.h"
/**
* print_alphabet_x10 - prints the alphabet x10 times
*
* Descripcion - prints the alphabet x times
*/
void print_alphabet_x10(void)
{
int ch;
char alp;
for (ch = 0; ch <= 10; ch++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
