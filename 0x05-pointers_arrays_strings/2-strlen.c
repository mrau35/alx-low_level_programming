#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: the string input
 * Return: the length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
