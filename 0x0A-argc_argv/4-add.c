#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  adds positive numbers if no number will print 0
 *  if a other symbols/character will print ERROR
 *  @argc: argument count
 *  @argv: argument vector
 *  Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int n, sum;
	char *s;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			for (n = 0; n < strlen(s); n++)
			{
				if (s[n] < 48 || s[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(s);
			s++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
