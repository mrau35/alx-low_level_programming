#include "unistd.h"
/**
 * _putchar - a function that prints single character at a time
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	write(1, &c , 1);
	return 0;
}
