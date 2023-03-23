#include "main.h"
/**
* _isupper - checks for uppercase character
* @c: character to be checked
* Return: either 1 or 0
*/

int _isupper(int c)
{
	int b = 65, e = 90;

	if (c >= b && c <= e)
		return (1);
	else
		return (0);
}
