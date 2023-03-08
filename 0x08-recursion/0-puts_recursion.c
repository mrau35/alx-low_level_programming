#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: string input
 * Return: string
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s)
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
	return;
}
