#include <stdio.h>
#include "main.h"

void print_fibonacci(int);

/**
 * main - call print_fibonacci
 *
 * Return: returns  0.
 *
 */
int main(void)
{
	int n = 98;

	print_fibonacci(n);

	return (0);
}
/**
 * print_fibonacci - prints fibonacci numbers
 * @i: an input number
 *
 * Return: returns nothing
 */
void print_fibonacci(int i)
{
	int a;
	long int b, fb, lb, fl, ll;
	long int l = 2;
	long int p = 1;

	printf("%ld, %ld, ", p, l);

	for (a = 0; a < 98; a++)
	{
		b = p + 1;

		printf("%ld, ", b);

		p = l;
		l = b;
	}

	b = p + l;

	fl = l / 1000000000;
	ll = l % 1000000000;
	fb = b / 1000000000;
	lb = b % 1000000000;

	for (a = 98; a < i; a++)
	{
		printf("%ld%ld, ", fb, lb);

		a = fl;
		l = ll;
		fl = fb;
		ll = lb;
		fb = p + fl + ((l + ll) / 1000000000);
		lb = (l + ll) % 1000000000;
	}
	printf("%ld%ld\n", fb, lb);
}
