#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character
 * @c: the character checked
 * Return: 1 for lowercase charachter or 0 for else .
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
