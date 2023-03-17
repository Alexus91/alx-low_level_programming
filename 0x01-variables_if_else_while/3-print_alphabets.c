#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: always 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (l = 'A'; l <= 'Z'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
