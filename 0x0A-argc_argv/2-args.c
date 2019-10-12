#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments of array
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	printf("%s\n", argv[p]);
	return (0);
}
