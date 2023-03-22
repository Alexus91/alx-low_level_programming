#include "main.h"
/**
 * print_sign - prints sing of number
 * @a: the number to be checked
 * return: 1 for positive num, -1 for negative or zero for anything eles
 */
int print_sign(int a)
{
	if (a > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (a < 0)
	{
		_putchar(45);
		return (-1);
	}
		else
	{
		_putchar(48);
		return (0);
	}
}
