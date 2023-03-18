#include <stdio.h>

/**
 * main - a C program that prints the size of various types on
 * the computer it is compiled and run on.. 
 * Return: always 0
 */
int main(void)
{
	printf("Size of a char: %ZU byte(s)\n", sizeof(char));
	printf("Size of an int: %ZU byte(s)\n", sizeof(int));
	printf("Size of a long int: %ZU byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ZU byte(s)\n",sizeof(long long int));
        printf("Size of a float: %ZU byte(s)\n",sizeof(float));	
	return (0);

}
