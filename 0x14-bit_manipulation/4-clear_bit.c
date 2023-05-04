#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: unsigned long it pointer
 * @index: bit index
 *
 * Return: 1 if sucess and -1 if failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	while (index > 63)
	{
		return (-1);
	}
	i = 1 << index;
	if (*n & i)
		*n ^= i;
	return (1);
}
