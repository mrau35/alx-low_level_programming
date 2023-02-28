#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: input string
 */

void print_rev(char *s)
{
	int i, count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
