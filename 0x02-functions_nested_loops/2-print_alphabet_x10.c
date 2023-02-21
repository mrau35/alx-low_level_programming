#include "main.h"
/**
 * prints 10 times the alphabet, in lowercase, follwed by a new line
 */
void print_alphabet_x10(void)
{
	int ch, count;

	for (count = 1; count <= 10; count++)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
