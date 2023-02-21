#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  a function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n - input
 */
void print_to_98(int n)
{
	int count;

	if (n <= 98)
	{
		for (count = n; count <= 98; count++)
		{
			printf("%d", count);
			if (count == 98)
				continue;
			printf(" ");
			printf(" ");
		}
		printf("\n");
	}
	if (n > 98)
	{
		for (count = n; count >= 98; count--)
		{
			printf("%d", count);
			if (count == 98)
				continue;
			printf(" ");
			printf(" ");
		}
		printf("\n");
	}
}
