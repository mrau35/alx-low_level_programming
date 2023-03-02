#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @src: a source string
 * @dest: a destination string
 * Return: return dest string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	while (dest[j] != '\0')
	{
		dest[i] = src[j];

		i++;
		j++;
	}

	return (dest);
}
