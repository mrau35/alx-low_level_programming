#include "main.h"

/**
 * print_numbers - a function that prints numbers, from 0 to 9
 * Return: Always 0 (Succes)
 */

void print_numbers(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
