#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: destination string
 * @src: resource string
 * @n: number of bytes
 * Return: return copied dest string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
