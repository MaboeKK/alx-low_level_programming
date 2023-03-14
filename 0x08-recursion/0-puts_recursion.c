#include "main.h"

/**
 * _puts_recursion - Prints string then adds new line
 * @s: string variable.
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
