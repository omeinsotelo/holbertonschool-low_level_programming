#include "holberton.h"
/**
* _abs - computes absolute value of i
* @i: the interger
*
* Return: absolute value of an integer;
*/
int _abs(int i)
{
int value;
if (i < 0)
{
value = i * (-1);
return (value);
}
else
{
return (i);
}
return (0);
}
