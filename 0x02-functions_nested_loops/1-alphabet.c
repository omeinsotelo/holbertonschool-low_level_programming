#include "holberton.h"
/**
* main - Entry point
* I sometimes suffer from insomnia. And when I can't fall asleep
* Return: Always 0 (Success)
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
