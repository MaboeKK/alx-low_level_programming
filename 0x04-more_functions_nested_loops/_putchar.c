#include <unistd.h>
#include "main.h"

/**
 * _putchar - Write the character to C to stdout
 * @c: The char to print
 * Return: On suceess print 1 or -1, etc.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
