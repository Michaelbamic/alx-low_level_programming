#include "main.h"

/**
 * is_prime_number - returns 1 if prime otherwise 0
 * @n: input number
 * Return: no return.
 */
int is_prime_number(int n)
{
	int x = 0;

	for (x = 0; x <= n; x++)
	{
		if (n % x != 0)
			return (0);
		else
			return (1);
	}
	break;
}
