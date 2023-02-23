#include "main.h"

/**
 * print_most_numbers.c - a funcion prints number from 0 to 9
 * Return: always 0 (success)
 */

void print_most_numbers(void)
{
	char ch;

	ch = '0';

	while (ch <= '9')
	{
		if(ch == '2' || ch == '4')
		{
			ch++;
			continue;
		}
		else
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
}
