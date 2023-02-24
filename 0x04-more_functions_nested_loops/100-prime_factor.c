#include "main.h"
#include <stdio.h>

/**
 * main -a function that prints the largest prime number
 * break: exit from the loop if n = 1
 * Return: the largest prime number
 */

int main()
{
	long int lpn;

	long int div = 2;
	
	long int n = 612852475143;

	while (n != 0)
	{
		if ((n % div) != 0)
		{
			div++;
		}
		else
		{
			lpn = n;

			n = n / div;

			if (n == 1)
			{
				printf("%ld\n", lpn);
				break;
			}
		}
	}
	return (0);
}
