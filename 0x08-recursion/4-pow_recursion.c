#include "main.h"
/**
 * _pow_recursion - Write a function that returns the value of x raised to the power of y.
 *
 * @x: Input number
 * @y: Power number
 *
 * Return: -1 if "y" is lower than zero, return 1 if "y" is equal to 1.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
