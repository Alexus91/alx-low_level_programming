#include "main.h"
/**
 * _memset - fill a block of mamory with a sepecific value
 * @s: starting adress
 * @b: the desired value
 * @n : number of bytes to be changed
 *
 * Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for(;n>0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
