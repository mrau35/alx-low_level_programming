#include "main.h"
/**
 * print_times_table - a function that adds two integers and returns the result
 * @n: number input
 */
void print_times_table(int n)
{
	int i, j, res, tmp;
	if (n >=0 && n<=15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if ((res / 10) > 0 && (res / 10) < 10)
				{
					_putchar((res / 10) + '0');
				}
				else if((res / 10) >= 10)
				{
					tmp = res / 10;
					_putchar((tmp / 10) + '0');
					_putchar((tmp % 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((res % 10) + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					if (res < 100)
					{
						_putchar(' ');
					}
				}
			}		
			_putchar('\n');
		}
	}
}
