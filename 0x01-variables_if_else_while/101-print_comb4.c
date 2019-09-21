#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int m;
	int p;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			for (p = 0; p <= 9; p++)
			{
				if ((n != m && m != p) && (n < m && m < p))
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(p + '0');
					if (n != 7 || m != 8 || p != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
