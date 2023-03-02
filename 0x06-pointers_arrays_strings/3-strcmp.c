#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: input string 1
 * @s2: input string 2
 * Return: return result
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else if (s1[i] > s2[i])
		{
			return (15);
		}
		else
		{
			return (-15);
		}
	}
	return (1);
}
