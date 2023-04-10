#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the pointer that will be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int x = 0;
	unsigned int ni = 0;
	int m = 1;
	int i = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			m *= -1;
		}
	while (s[x] >= 48 && s[x] <= 57)
	{
		i = 1;
		ni = (ni * 10) + (s[x] - '0');
		x++;
	}
	if (i == 1)
	{
		break;
	}
	x++;
	}
	ni *= m;
	return (ni);
}
