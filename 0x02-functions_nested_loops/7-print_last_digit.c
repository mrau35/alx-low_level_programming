#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @num: input
 * Return: absolute value of ab
 */
int print_last_digit(int num)
{
	int res;
	res = num % 10;
	
	if(res < 0)
	{
		res = -1 * res;
	}

	_putchar (res + '0');
	return (res);
}
