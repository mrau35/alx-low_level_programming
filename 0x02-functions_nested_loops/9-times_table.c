#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int num1, num2, res;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (num2 = 1; num2 <= 9; num2++)
		{
			res = num1 * num2;
			if ((res / 10) > 0)
			{
				_putchar((res/10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((res % 10) + '0');

			if(num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
