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
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-1');
	}

	return (value);
}
