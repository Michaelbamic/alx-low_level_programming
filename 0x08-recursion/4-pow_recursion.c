#include "main.h"

/**
 * _pow_recursion - returns the result of x raised to the power of y
 * @x: input raised integer
 * @y: input power integer
 * Return: no return
 */
int _pow_recursion(int x, int y);
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
