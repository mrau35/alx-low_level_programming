#include "main.h"
/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @a: input array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int *begin, *end, tmp, i;
	begin = a;
	end = a;

	for (i = 0; i < n - 1; i++)
	{
		end ++;
	}

	for (i = 0; i < (n / 2); i++)
	{
		tmp = *end;
		*end = *begin;
		*begin = tmp;
		
		begin++;
		end--;
	}
}
