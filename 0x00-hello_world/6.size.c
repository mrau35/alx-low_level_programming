#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intSize;
	float floatSize;
	char charSize;
	long long int longLongIntSize;
	long int longIntSize;

	printf("Size of a char: %zu byte(s)\n", sizeof(intSize));
	printf("Size of a char: %zu byte(s)\n", sizeof(floatSize));
	printf("Size of a char: %zu byte(s)\n", sizeof(charSize));
	printf("Size of a char: %zu byte(s)\n", sizeof(longLongIntSize));
	printf("Size of a char: %zu byte(s)\n", sizeof(longIntSize));

	return (0);
}
