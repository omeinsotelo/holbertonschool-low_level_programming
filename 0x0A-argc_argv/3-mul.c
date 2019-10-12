#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments of array
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int p, q;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		p = atoi(argv[1]);
		q = atoi(argv[2]);
		printf("%d\n", p * q);
		return (0);
	}
}
