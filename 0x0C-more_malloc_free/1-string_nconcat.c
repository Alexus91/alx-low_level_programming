#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: string to append
 * @s2: sting to concatenate
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int x = 0,  y = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		s3 = malloc(sizeof(char) * (l1 + n + 1));
	else
		s3 = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!s3)
		return (NULL);
	while (x < l1)
	{
		s3[x] = s1[x];
		x++;
	}
	while (n < l2 && x < (l1 + n))
		s3[x++] = s2[y++];
	while (n >= l2 && x < (l1 + l2))
		s3[x++] = s2[y++];
	s3[x] = '\0';
	return (s3);
}
