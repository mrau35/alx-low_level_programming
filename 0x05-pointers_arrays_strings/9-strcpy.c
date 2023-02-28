#include "main.h"
/**
 * *_strcpy - a function that copies the string
 * @dest: destination array
 * @src: source array
 */

char *_strcpy(char *dest, char *src)
{
	int i, c = 0;

	while (src[c] != '\0')
	{
		c++;
	}
	for (i = 0; i <= c; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
