#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: no return
 */
void print_number(int n)
{
	unsigned int a, b, len;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}
	b = a;
	len = 1;

	while (b > 9)
	{
		b /= 10;
		len *= 10;
	}

	for (; len >= 1; len /= 10)
	{
		_putchar(((a / len) % 10) + 48);
	}
}
