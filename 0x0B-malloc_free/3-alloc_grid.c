#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: an integer input of array width
 * @height: an integer input of array height
 * Return: returns 2 dimensional arry of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j, **intArr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	intArr = malloc(sizeof(int *) * height);
	if (intArr)
	{
		for (i = 0; i < height; i++)
		{
			intArr[i] = malloc(sizeof(int) * width);
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				intArr[i][j] = 0;
			}
		}
		return (intArr);
	}
	else
	{
		return (NULL);
	}
	return (0);
}
