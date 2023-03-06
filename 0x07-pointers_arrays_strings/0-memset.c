#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a string pointer
 * @b: constant byte
 * @n: bytes of memory area pointed to by s.
 * Return: string pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
