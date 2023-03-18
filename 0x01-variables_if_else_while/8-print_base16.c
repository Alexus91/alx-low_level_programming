#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase
 * followed by a new line.
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	char lw;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (lw = 'a'; lw <= 'f'; lw++)
		putchar(lw);
	putchar('\n');
	return (0);
}
