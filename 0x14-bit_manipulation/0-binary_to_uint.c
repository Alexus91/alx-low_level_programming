#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string pointing binary
 *
 * Return: number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int ix;
	unsigned int num_c = 0;

	while (!b)
		return (0);

	for (ix = 0 ; b[ix]; ix++)
	{
		if (b[ix] < '0' || b[ix] > '1')
		{
			return (0);
		}
		num_c = 2 * num_c + (b[ix] - '0');
	}
	return (num_c);
}
