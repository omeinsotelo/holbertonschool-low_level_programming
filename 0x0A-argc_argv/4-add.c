#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - result of add two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 and error if the numbers is not digit
 */
int main(int argc, char *argv[])
{
	int c;
	int a = 0;
	int s;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (c = 1; c < argc; c++)
	{
		for (s = 0; argv[c][s] != '\0'; s++)
		{
			if (!(isdigit(argv[c][s])))
			{
				printf("Error\n");
				return (1);
			}
		}
		a += atoi(argv[c]);
	}
	printf("%d\n", a);
	return (0);
}
