#include "main.h"

/**
 * _isdigit - Checks if char is a digit.
 * @dgt: Datatype int to be checked
 * Return: 1 if char is a digit, 0 otherwise
 */
int _isdigit(int dgt)
{
	int y = 0;

	if (dgt >= '0' && dgt <= '9')	
		y = 1;
	
	return (y);
}
