#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root
 * of a number.
 * @n: integer input
 * @i: loop controller;
 * Return: returns the natural square root of a number
 */
int sqrt_chk(int n, int i);

int _sqrt_recursion(int n)
{
	return (sqrt_chk(n, 1));
}

/**
 * sqrt_chk - checks the whether the number has natural square root or not..
 * @n: integer input
 * @i: loop controller
 * Return: returns the result
 */

int sqrt_chk(int n, int i)
{
	int res = i * i;

	if (res > n)
	{
		return (-1);
	}
	if (res == n)
	{
		return (i);
	}
	return (sqrt_chk(n, i + 1));
}
