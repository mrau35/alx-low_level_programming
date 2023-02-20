#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;

	int charSize = sizeof(charType);
	int intSize = sizeof(intType);
	int longIntSize = sizeof(longIntType);
	int longLongIntSize = sizeof(longLongIntType);
	int floatSize = sizeof(floatType);

	printf("Size of a char: %zu byte(s)\n", charSize);
	printf("Size of an int: %zu byte(s)\n", intSize);
	printf("Size of a long int: %zu byte(s)\n", longIntSize);
	printf("Size of a long long int: %zu byte(s)\n", longLongIntSize);
	printf("Size of a float: %zu byte(s)\n", floatSize);

	return (0);
}
