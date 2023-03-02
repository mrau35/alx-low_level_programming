#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: input string 1
 * @s2: input string 2
 * Return: return result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
