#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: number of line prints
 * Return: always 0 (Success)
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for(i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
