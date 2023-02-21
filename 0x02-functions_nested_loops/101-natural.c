#include <stdio.h>
/**
 * sum_of_multiples - a function that prints the sum of multiples of 3 & 5
 * main - entry function
 * @n: number input
 * Return: Always 0 (Success)
 */
int sum_of_multiples(int n)
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
	return (sum);
}
int main(void)
{
	int res;

	res = sum_of_multiples(1024);

	printf("%d\n", res);
	return (0);
}
