#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer in the function
 * @name: string
 * @f: pointer
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
