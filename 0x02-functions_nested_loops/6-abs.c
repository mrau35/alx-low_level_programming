#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @num: input
 * Return: absolute value of ab
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num = (-1) * num);
	}
	else
		return (num);
}
