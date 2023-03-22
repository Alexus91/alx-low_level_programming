#include "main.h"

/**
 * _isalpha -  checks for alphabetic character.
 * @c : the charachter
 * Return : 1 for alphabitic character or 0 for enything eles.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
