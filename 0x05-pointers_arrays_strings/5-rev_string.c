#include "main.h"

/**
 * rev_string - Reverses a string @s input
 * @s: string input
 * Return: reverse string
 */

void rev_string(char *s)
{
	char r = s[0];
	int ctr = 0;
	int n;

	while (s[ctr] != '\0')
		ctr++;

	for (n = 0; n < ctr; n++)
	{
		ctr--;
		r = s[n];
		s[n] = s[ctr];
		s[ctr] = r;
	}
}
