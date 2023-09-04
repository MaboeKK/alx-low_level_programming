#include "main.h"

/**
 * my_sqrt_recursion - This is square root function
 * @a: The entry is equal to n, of the before function
 * @b: Input number
 *
 * Return: This is the result
 */
int my_sqrt_recursion(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if ((b * b) >= a)
		return (-1);
	else
		return (my_sqrt_recursion(a, b + 1));
}

/**
 * _sqrt_recursion - This is my first function
 * @n: This is my value
 *
 * Return: This is my result of the function my_sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (my_sqrt_recursion(n, 0));
}