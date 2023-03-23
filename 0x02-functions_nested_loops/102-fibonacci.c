#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
       	int i, n;
	long int f1 = 1, f2 = 2, nex;
	
	printf("%ld, %ld", f1, f2);
	
	for (i = 3; i <= 50; i++)
	{
		nex = f1 + f2;
		printf(", %ld", nex);
		f1 = f2;
		f2 = nex;
	}
	printf("\n");
	return (0);
}
