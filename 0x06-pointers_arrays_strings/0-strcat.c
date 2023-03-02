#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @src: a source string
 * @dest: a destination string
 * Return: return dest strinig
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		dest[i + j] = src[j];

	}
	dest[i + j] = '\0';

	return (dest);
}
