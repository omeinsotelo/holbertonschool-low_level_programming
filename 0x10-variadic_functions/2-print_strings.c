#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @n: number of strings passed to the function
 * @separator: is the string to be printed between the strings
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *j;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(a, char *);
		if (j == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", j);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}
