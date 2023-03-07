#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: a string pointer
 * @c: a character to be checked if it is exsited or not in string s
 * Return: a pointer to the first occurence of the character c
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return (NULL);
		}
	}
	return (0);
}
