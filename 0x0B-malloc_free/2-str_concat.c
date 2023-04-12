#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
	char *conct;
	int n, ct;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = ct = 0;
	while (s1[n] != '\0')
		n++;
	while (s2[ct] != '\0')
		ct++;
	conct = malloc(sizeof(char) * (n + ct + 1));
	if (conct == NULL)
		return (NULL);
	n = ct = 0;
	while (s1[n] != '\0')
	{
		conct[n] = s1[n];
		n++;
	}
	while (s2[ct] != '\0')
	{
		conct[n] = s2[ct];
		n++, ct++;
	}
	conct[n] = '\0';
	return (conct);
}
