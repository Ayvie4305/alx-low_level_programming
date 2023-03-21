#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: parameter to be printed
 * Return: k
 */

int print_last_digit(int a)
{
	int i;

	i = a % 10;
	if (a < 0)
		i = -(i);
	_putchar(i + '0');
	return (i);
}
