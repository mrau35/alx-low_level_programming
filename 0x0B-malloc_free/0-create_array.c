#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the input
 * @c: character input
 * Return: returns arry of charcter pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
