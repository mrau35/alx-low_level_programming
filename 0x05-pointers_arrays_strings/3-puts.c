#include "main.h"
/**
 * _puts - a function that prints a string followed by a new line
 * @str: a string input
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
