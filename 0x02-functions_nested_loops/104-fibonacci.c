#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count, x1 = 1, x2 = 2, x3;

	printf("%d, %d", x1, x2);

	for (count = 3; count <= 98; count++)
	{
		x3 = x1 + x2;
		x1 = x2;
		x2 = x3;
		printf(", %d", x3);
	}
	printf("\n");
	return (0);
}

