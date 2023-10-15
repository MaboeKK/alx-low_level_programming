#include "stdarg.h"
#include "stdio.h"
#include "variadic_functions.h"

/**
 * print_numbers - It prints numbers.
 * @separator: The string between numbers.
 * @n: All integers to be passed.
 * Return: NULL.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
