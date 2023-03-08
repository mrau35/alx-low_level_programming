#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y.
 * @x: integere input
 * @y: integer input exponent
 * Return: returns the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
