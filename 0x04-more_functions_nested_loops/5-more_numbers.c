#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 ten times.
 * Returns 0
 */
void more_numbers(void)
{
	int num, a;

	for (a = 0; a <= 9; a++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
