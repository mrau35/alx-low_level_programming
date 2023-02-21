#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @num: input
 * Return: absolute value of ab
 */
int print_last_digit(int num)
{
	int res;

	res = num % 10;
	
	if (res < 0)
	{
		res = -1 * res;
	}

	_putchar (res + '0');
	return (res);
}
