#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - a program that prints its name, followed by a new line.
 * checker - a program that checks where the input is number or not.
 * @s: user input arguments
 * one of the arguments.
 * Return: always 0 (success)
 */

int checker(char *s);

int main(int argc, char *argv[])
{
	int c, res = 0;

	for (c = 1; c < argc; c++)
	{
		if (checker(argv[c]))
		{
			res = res + atoi(argv[c]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}

/**
 * checker - a program that checks where the input is number or not.
 * @s: user input arguments
 * Return: 0 if all arguments are numbers otherwise 1.
 */

int checker(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}
