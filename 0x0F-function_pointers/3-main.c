#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * @argc: number of argumentes
 * @argv: array
 *
 * Return: the result of operation
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = get_op_func(argv[2]);
	a = atoi(argv[1]);
        b = atoi(argv[3]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((p == op_div || p == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	c = (*p) (a, b);
	printf("%d\n", c);
	return (0);
}
