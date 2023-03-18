#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: always 0
 */
int main(void)
{
	int n, g;

	for (n = '0'; n < '9'; n++)
	{
	for (g = n + 1; g <= '9'; g++)
	{
	if (g != n)
	{
	putchar(n);
	putchar(g);
	if (n == '8' && g == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
