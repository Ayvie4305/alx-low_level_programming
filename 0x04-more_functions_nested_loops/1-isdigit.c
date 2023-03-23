#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: digit to be checked
 * Return: Either 1 or 0
 */

int _isdigit(int c)
{
	int b = 48, e = 57;

	if (c >= b && c <= e)
		return (1);
	else
		return (0);
}
