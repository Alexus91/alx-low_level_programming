#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: the destination string
 * @src: pointer to the resulting dest
 * Return: pointer to the resulting dest
 */

char *_strcat(char *dest, char *src)
{
	int dl = 0, n;

	while (dest[dl])
	{
		dl++;
	}

	for (n = 0; src[n] != 0; n++)
	{
		dest[dl] = src[n];
		dl++;
	}

	dest[dl] = '\0';
	return (dest);
}
