#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @src: a source string
 * @dest: a destination string
 * @n: number of bytes from src
 * Return: return dest strinig pointer
 */

char *_strncat(char *dest, char *src, int n)
{
        int i = 0, j = 0;

        while (dest[i] != '\0')
        {
                i++;
        }

	while (src[j] != '\0')
	{
		if (j < n)
		{
               		dest[i] = src[j];
		}
		i++;
		j++;
	}

        dest[i] = '\0';

        return (dest);
}
