#include "main.h"

/**
 * print_line - Prints A Strasight Line Using '_'
 * @n: The Number of '_' To Be Printed
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}	
