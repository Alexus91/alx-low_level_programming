#include "main.h"

/**
 * _strncpy - copy an inputed num
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 **/
char *_strncpy(char *dest, char *src, int n)

{
	int ix = 0, sn = 0;

	while (src[ix++])
		sn++;
	for (ix = 0; src[ix] && ix < n; ix++)
		dest[ix] = src[ix];

	for (ix = sn; ix < n; ix++)
		dest[ix] = '\0';

	return (dest);
}
