#include "main.h"

/**
 * _isupper - check if letter is upper
 * *@c: the number to be checked
 *
 * Return: 1 for upper letter or 0 for eles
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
