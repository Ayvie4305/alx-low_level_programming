#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: parameter that is printed
 * Return: will be 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
