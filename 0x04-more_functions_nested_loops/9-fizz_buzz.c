#include <stdio.h>
<<<<<<< HEAD
#include "holberton.h"
=======
>>>>>>> 15242f5217adef144b493971401e14903a068349
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
<<<<<<< HEAD
	int n;
	int m;
	int p;
		for (n = 0; n < 10; n++)
		{
			for (m = 0; m < 10; m++)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				for (p = 0; p < 10; p++)
					{
						putchar((n / 10) + '0');
						putchar((n % 10) + '0');
					}
			}
		putchar((n / 10) + '0');
		putchar('\n');
		}
=======
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
>>>>>>> 15242f5217adef144b493971401e14903a068349
	return (0);
}
