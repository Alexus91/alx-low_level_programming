#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @a: the num to be treated
 * Return: value of last digit num.
 */
int print_last_digit(int a)
{
	int lastdig;

	lastdig = a % 10;
	if (lastdig < 0)
	{
		lastdig = lastdig * -1;
	}
	_putchar(lastdig + '0');
	return (lastdig);
}
