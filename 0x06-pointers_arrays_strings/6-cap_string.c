#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: string to be capitalized.
 * Return: pointer to the changed string.
 */

char *cap_string(char *str)

{
	int ix = 0;

	while (str[ix])
	{
		while (!(str[ix] >= 'a' && str[ix] <= 'z'))
			ix++;
		if (str[ix - 1] == ' ' ||
				str[ix - 1] == ' ' ||
				str[ix - 1] == '\t' ||
				str[ix - 1] == '\n' ||
				str[ix - 1] == ',' ||
				str[ix - 1] == ';' ||
				str[ix - 1] == '.' ||
				str[ix - 1] == '!' ||
				str[ix - 1] == '?' ||
				str[ix - 1] == '"' ||
				str[ix - 1] == '(' ||
				str[ix - 1] == ')' ||
				str[ix - 1] == '{' ||
				str[ix - 1] == '}' ||
				ix == 0)
			str[ix] -= 32;
		ix++;
	}
	return (str);
}
