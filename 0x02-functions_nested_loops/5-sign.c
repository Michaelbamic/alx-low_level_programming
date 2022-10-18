#include "main.h"

/**
 * print_sign - check main
 * n - an input number
 * description - this function prints the sign of the number
 * return -1 if the number is positive, 0 if the number is 0
 *
 * or -1 if the number is negative
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

	_putchar('\n');
}
