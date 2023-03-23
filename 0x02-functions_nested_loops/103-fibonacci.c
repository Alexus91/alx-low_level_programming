#include <stdio.h>
#include "main.h"

/*
 * main - finds and prints the sum of the even-valued
 * terms in the main sequence
 *
 * Return: always 0
*/

int main(void)
{
	int f1 = 1;
	int f2 = 2;
	int f3;
	int sum = 2;

	while (f2 <= 4000000)
	{
		f3 = f1 + f2;
		if (f3 % 2 == 0)
		{
			sum += f3;
		}
		f1 = f2;
		f2 = f3;
	}

	printf("%d\n", sum);
	return (0);
}
