#include "main.h"
/**
 *_abs - function that computes the absolute value of an integer
 * @c: number to be computed
 * Return: absolute value of um or 0
 */
int _abs(int c)
{
	int abs_val;

	if (c < 0)
	{

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
