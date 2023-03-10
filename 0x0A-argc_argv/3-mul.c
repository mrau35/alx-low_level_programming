#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: contains the number of arguments passed to the program.
 * @argv: a one-dimensional array of strings. Each string is
 * one of the arguments.
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			res = res * atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
