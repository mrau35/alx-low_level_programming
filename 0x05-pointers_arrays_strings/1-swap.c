#include "main.h"
/**
 * swap_int - a function that swaps the value of two integers
 * @a:i the first integer
 * @b: the second integer
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
