#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the num for change
 * @index: the bit to set 1 index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	while (index > 63)
	{
		return (-1);
	}
	i = 1 << index;
	*n = (*n | i);
	return (1);
}
