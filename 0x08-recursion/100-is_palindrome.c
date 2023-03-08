#include "main.h"
/**
 * is_palindrome - a function that returns 1 if a string is
 * a palindrome and 0 if not.
 * pal_chk - checks if the string is palindrome or not
 * @s: string input
 * @li: left index
 * @ri: right index
 * Return: return 1 if the string is palindrome otherwise 0
 */

int pal_chk(char *s, int li, int ri);

int is_palindrome(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (pal_chk(s, 0, i - 1));
}

/**
 * pal_chk - checks if the string is palindrome or not
 * @li: left index
 * @s: string input
 * @ri: right index
 * Return: return 1 if the string is palindrome otherwise 0
 */

int pal_chk(char *s, int li, int ri)
{
	if (s == NULL || ri < 0)
	{
		return (0);
	}
	if (li >= ri)
	{
		return (1);
	}
	if (s[li] == s[ri])
	{
		return (pal_chk(s, li + 1, ri - 1));
	}
	return (0);
}