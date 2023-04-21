#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of all its paramters.
 * @n: The number of paramters in the function.
 * @...: A variable number of sum parameters
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int x, sum = 0;

	va_start(p, n);

	for (x = 0; x < n; x++)
		sum += va_arg(p, int);

	va_end(p);

	return (sum);
}
