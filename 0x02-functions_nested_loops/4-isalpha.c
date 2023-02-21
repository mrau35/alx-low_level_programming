#include "main.h"

/**
 * a function that checks for lowercase character
 * Return: 1 if int c is letter, lowercase or uppercase 0 otherwise
 * @c: input
 */

int _isalpha(int c)
{
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
