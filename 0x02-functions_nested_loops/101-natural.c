#include <stdio.h>
/**
 * sum_of_multiples - a function that prints,
 * the sum of multiples of 3 & 5
 * @n: number input
 * Return: the sum of multiples 
 */
int sum_of_multiples(int n)
{
	int i, total;
	int total = 0;

	for (i = 0; i < n; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			total = total + i;
		}
	}
	return (total);
}
