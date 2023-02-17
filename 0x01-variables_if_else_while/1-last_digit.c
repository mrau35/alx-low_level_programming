#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/**
	 * main - Entry point
	 * Return: Always 0 (Success)
	 */
int main(void)
{
	int n, lstDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lstDigit = n % 10;
	if (lstDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstDigit);
	}
	if (lstDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lstDigit);
	}
	if (lstDigit < 6 && lstDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,lstDigit);
	}
	return (0);
}
