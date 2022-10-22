#include "main.h"

/**
 * _isupper - Checks if character is uppercase or not
 * @c: Variable Char
 * Return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
