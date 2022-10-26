#include <unistd.h>

/**
 * _putchar - prints character c to standard output
 * @c: char to be printed
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
