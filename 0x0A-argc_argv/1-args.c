#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments of array
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	argc--;
	printf("%d\n", argc);
	return (0);
}
