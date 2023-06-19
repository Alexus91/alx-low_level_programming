#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: - the number to be checked
 * Return: 1 for a charachter that will be a digit or 0 for any eles
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
