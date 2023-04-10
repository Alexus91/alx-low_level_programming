#include "main.h"
/**
 * _strcmp - compares tow strings
 * @s1: pointer to the first string
 * @s2: a pointer to  the secend string
 * Return: s1[n] - s2[n]
 */
int _strcmp(char *s1, char *s2)
{
	int n;

	n = 0;

	while (s1[n] != '\0' && s2[n] != '\0')
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
		n++;
	}
	return (0);
}
