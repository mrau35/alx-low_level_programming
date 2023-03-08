#include "main.h"
/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: integer input
 * @i: loop controller
 * Return: 1 if n is prime otherwise 0
 */

int prime_chk(int n, int i);

int is_prime_number(int n)
{
	return (prime_chk(n, 1));
}

/**
 * prime_chk - checks whetehr the number is prime or not
 * @n: integer input
 * @i: loop controller
 * Return: returns the result
 */
int prime_chk(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0)
		if (i > 1)
		{
			return (0);
		}
	if ((n / i) < i)
	{
		return (1);
	}
	return (prime_chk(n, i + 1));
}
