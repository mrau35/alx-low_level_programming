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
	else if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		return;
	}
}
