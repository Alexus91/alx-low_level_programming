#include "main.h"

/**
 * print_numbers - print the numbers snce 0 up to 9
 * Return: the numbers since 0 up to 0
 */
void print_numbers(void)

{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
