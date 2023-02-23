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
	char fizz[5] = "Fizz";
	char buzz[5] = "Buzz";
	char fizzBuzz[10] = "FizzBuzz"; 

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("%s", fizzBuzz);
		}
		else if ((i % 3) == 0)
		{
			printf("%s", fizz);
		}
		else if ((i % 5) == 0)
		{
			printf("%s", buzz);
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
