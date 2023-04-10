#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int s1 = 0, s2 = 0;

	if (argc == 3)
	{
		s1 = atoi(argv[1]);
		s2 = atoi(argv[2]);
		printf("%d\n", s1 * s2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
