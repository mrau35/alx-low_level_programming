#include "main.h"

/**
 * more_numbers - a function prints 10 times the number,
 * from 0 to 14, folloed by a new line
 *
 * Return: always 0 (success)
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
