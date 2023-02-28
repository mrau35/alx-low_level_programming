#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: input string
 */

void puts2(char *str)
{
	int i, len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	for (i = 0; i < (len - 1); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
