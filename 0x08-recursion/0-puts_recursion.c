#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: string input
 * Return: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
}
