#include "main.h"
/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: input string
 */

void puts_half(char *str)
{
	int i, j = 0;

	while (str[j])
	{
		j++;
	}

	for (i = (j / 2); i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
