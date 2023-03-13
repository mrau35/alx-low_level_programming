#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: a string input
 * Return: return string pointer
 */

char *_strdup(char *str)
{
	int i, j = 0;
	char *ar;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[j] != '\0')
		{
			j++;
		}
		ar = malloc(j * sizeof(char));
		if (ar)
		{
			for (i = 0; i < j; i++)
			{
				ar[i] = str[i];
			}
			ar[i] = '\0';
			return (ar);
		}
		else
		{
			return (NULL);
		}
	}
	return (0);
}

