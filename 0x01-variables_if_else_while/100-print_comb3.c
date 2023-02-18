#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
	 * main - Entry point
	 * Return: Always 0 (Success)
	 */
int main(void)
{
	int a, b, res;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a != b && a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				res = 10*a + b;
				if (res < 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
