#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints Fizz for numbers multiples of 3
 * and Buzz for multiples of 5 FizzBuzz for both multiples of 3 and 5
 * Return: Fizz, Buzz, FizzBuzz message
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}