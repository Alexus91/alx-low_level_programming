#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pt;
	int x, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	pt = malloc(sizeof(int) * s);

	if (pt == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		pt[x] = min++;

	return (pt);
}
