#include "main.h"

/**
* _strncat - concatenates 2 strings using n bytes
* @dest: destination string
* @src: source string
* @n: number of characters to concatenate
* Return: concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		len1++;
	for (i = 0 ; src[i] != '\0' ; i++)
		len2++;
	for (i = 0 ; i < n ; i++)
		dest[len1 + i] = src[i];
	return (dest);
}
