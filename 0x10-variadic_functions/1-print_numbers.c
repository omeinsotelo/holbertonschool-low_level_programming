#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @n: the number of integers
 * @separator: the string to be printed between numbers
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int j;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(a, int);
		printf("%d", j);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}
