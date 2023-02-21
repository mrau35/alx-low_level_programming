#include <stdio.h>
#include "main.h"
/**
 * sumof_multiples - a function that prints the sum of multiples of 3 & 5
 * @n: number inpu
 * Return: Always 0 (Success)
 */
int sumof_multiples(int n)
{
	int i, sum;
	sum = 0;

	for (i = 0; i < n; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	return (sum);
}
