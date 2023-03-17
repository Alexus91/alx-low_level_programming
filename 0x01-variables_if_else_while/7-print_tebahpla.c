#include <stdio.h>

/**
 * main - that prints the lowercase alphabet in reverse
 * followed by a new line.
 * Return: always 0
 */
int main(void)
{
	char lw;

	for (lw = 'z'; lw >= 'a'; lw--)
		putchar(lw);
	putchar('\n');
	return (0);
}
