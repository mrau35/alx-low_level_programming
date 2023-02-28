#include "main.h"
/**
 * rev_string - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: input string
 */

void rev_string(char *s)
{
	int i, len = 0;

	char *begin, *end, temp;

	begin = s;
	end = s;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (i = 0; i < (len - 1); i++)
	{
		end++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}

