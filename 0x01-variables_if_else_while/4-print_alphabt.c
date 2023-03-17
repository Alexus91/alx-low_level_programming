#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,followed by a new line.
 *
 * Return: always 0
 */
int main(void)
{
	char l, e, q;

	e = 'e';
	q = 'q';

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != e && l != q)
			putchar(l);
	}
	putchar('\n');
	return (0);
}
