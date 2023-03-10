#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: contains the number of arguments passed to the program.
 * @argv: a one-dimensional array of strings. Each string is
 * one of the arguments.
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 1;

	if (argc && *argv)
	{
		while (i < argc)
		{
			i++;
		}
		printf("%d\n", i - 1);
	}
	return (0);
}

