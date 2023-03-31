#include "main.h"

#include <stdio.h>

/**
 * rot13 - encodes a string
 * @i: pointer
 *
 * Return: *i
 */

char *rot13(char *i)

{
	int x;
	int y;
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; i[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (i[x] == d[y])
			{
				i[x] = dr[y];
				break;
			}
		}
	}
	return (i);
}
