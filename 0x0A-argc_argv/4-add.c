#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: contains the number of arguments passed to the program.
 * @argv: a one-dimensional array of strings. Each string is
 * one of the arguments.
 * Return: always 0 (success)
 */

int checker(int argc, char *argv[]);

int main(int argc, char *argv[])
{
	int i, flag, res = 0;

	flag = checker(argc, argv);

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	if (flag == 1)
	{
		printf("Error\n");
	}
	else if (flag == 0)
	{
		for (i = 1; i < argc; i++)
		{
			res = res + atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}

/**
 * checker - a program that checks where the input is number or not.
 * @argc: contains the number of arguments passed to the program.
 * @argv: a one-dimensional array of strings. Each string is
 * one of the arguments.
 * Return: 0 if all arguments are numbers otherwise 1.
 */

int checker(int argc, char *argv[])
{
	int i, flag;
	char *next;

	for (i = 1; i < argc; i++)
	{
		strtol(argv[i], &next, 10);
		if ((next == argv[i]) || (*next != '\0'))
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
	}
	return (flag);
}
