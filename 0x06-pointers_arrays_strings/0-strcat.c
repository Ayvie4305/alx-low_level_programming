#include "main.h"

/**
* _strcat - concatenates 2 strings
* @dest: destination string
* @src: source string
* Return: destination string
*/

char *_strcat(char *dest, char *src)
{
	int desto = 0;
	int srco = 0;
	int a;

	for (a = 0 ; dest[a] != '\0' ; a++)
		desto++;
	for (a = 0 ; src[a] != '\0' ; a++)
		srco++;
	for (a = 0 ; a <= srco ; a++)
		dest[desto + a] = src[a];
	return (dest);
}

