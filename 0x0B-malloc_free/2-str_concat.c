#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: a first string input
 * @s2: a second string input
 * Return: returns a concatenated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	char *ar;

	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[i] != '\0')
	{
		i++;
	}
	sum = i + j;
	ar = malloc(sum * sizeof(char) + 1);
	if (ar)
	{
		for (i = 0; i < j; i++)
		{
			ar[i] = s1[i];
		}
		for (j = 0; i < sum; j++)
		{
			ar[i] = s2[j];
			i++;
		}
		ar[i] = '\0';
		return (ar);
	}
	else
	{
		return (NULL);
	}
	return (0);
}
