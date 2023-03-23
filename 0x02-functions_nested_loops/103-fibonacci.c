#include <stdio.h>

/*
 * main - finds and prints the sum of the even-valued
 * terms in the main sequence less than 4000
 *
 * Return: nothing
*/

int main(void)
{
	int a = 0;
	long b = 1, c = 2, sum = c;

	while (c + b <= 4000000)
	{
		c += b;
		if (c % 2 == 0)

		sum += c;
		b = c - b;
		++a;
	}

	printf("%ld\n", sum);
	return (0);
}
