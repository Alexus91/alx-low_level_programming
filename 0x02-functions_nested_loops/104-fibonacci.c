#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, b = 1, a = 2, l = 1000000000;
	unsigned long int b1, b2, a1, a2;

	printf("%lu", b);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", a);
		a += b;
		b = a - b;
	}

	b1 = b / l;
	b2 = b % l;
	a1 = a / l;
	a2 = a % l;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", a1 + (a2 / l));
		printf("%lu", a2 % l);
		a1 += b1;
		b1 = a1 - b1;
		a2 += b2;
		b2 = a2 - b2;
	}
	printf("\n");
	return (0);
}
