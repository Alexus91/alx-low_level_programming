#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{

	char *a;

	int x, y = 0;

	if (str == NULL)
		return (NULL);

	x = 0;

	while (str[x] != '\0')

		x++;

	a = malloc(sizeof(char) * (x + 1));

	if (a == NULL)

		return (NULL);

	for (y = 0; str[y]; y++)
		a[y] = str[y];
	return (a);
}
