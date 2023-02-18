#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
	 * main - Entry point
	 * Return: Always 0 (Success)
	 */
int main(void)
{
	int a, b, c, res;

	for (a = 0; a <= 7; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (a < b && b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					res = a * 100 + b * 10 + c;
					if (res < 789)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
