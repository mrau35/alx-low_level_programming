#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints,
 * the sum of multiples of 3 & 5
 * @n: number input
 * Return: the sum of multiples 
 */

int main(int n)
{
	int i, total;
	total = 0;

	for (i = 0; i < n; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			total = total + i;
		}
	}
	return (total);
}
