#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase.
 * @s: string input
 * Return: upper case letter
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
