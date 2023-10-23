#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string that separates 2 strings.
 * @n: The number of strings.
 * @...: The number of strings to be printed.
 * Return: If not NULL, then (nil).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);
	for (unsigned int i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
