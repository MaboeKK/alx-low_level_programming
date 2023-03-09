#include "main.h"

/**
 * _puts_recursion - Prints string then adds new line
 * @s: string variable
 * Return: 1
 * Exeption, on error -1 is returned.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
