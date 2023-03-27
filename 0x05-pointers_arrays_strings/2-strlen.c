#include "main.h"

/**
 * _strlen - returns the length of a s (string)
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length++);
}
