#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n : number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int ct, ix;
	unsigned long int presn_num;

	ct = 0;


	for (ix = 63; ix >= 0; ix--)
	{
		presn_num = n >> ix;

		if (presn_num & 1)
		{
			_putchar('1');
			ct++;
		}
		else if (ct)
		{
			_putchar('0');
		}
	}
	if (!ct)
	{
		_putchar('0');
	}
}
