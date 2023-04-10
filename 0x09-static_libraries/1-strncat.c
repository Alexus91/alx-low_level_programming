#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: the string appended unopn.
 * @src: the string appended to dest
 * @n: the number of bytes
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{

	int ix = 0, dn = 0;

	while (dest[ix++])
		dn++;
	for (ix = 0; src[ix] && ix < n; ix++)
		dest[dn++] = src[ix];
	return (dest);
}

