#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: a destination string pointer
 * @src: a source string pointer
 * @n: number of bytes of the memory area pointed by s
 * Return: returns dest string pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
