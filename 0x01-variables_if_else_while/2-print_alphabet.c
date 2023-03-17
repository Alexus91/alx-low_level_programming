#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet,followed by a new line.
 *
 * Return: always 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
