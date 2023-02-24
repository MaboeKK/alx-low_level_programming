#include "main.h"

/**
 * _isupper - Checks if character is uppercase return 1 if lowercase return 0.
 * @c: Variable Char
 * Return 0 or 1
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
