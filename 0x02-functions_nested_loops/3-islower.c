#include "main.h"

/**
 * a function that checks for lowercase character
 * Return: 0 if int c is no lowercase
 * Return: 1 if int c is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
