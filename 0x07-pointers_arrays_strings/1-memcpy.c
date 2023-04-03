#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory place stored
 * @src: memory place copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	for (; i < j; i++)
	{
		dest[j] = src[i];
		n--;
	}
	return (dest);
}
