#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: no return
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (seperator && i < n - 1)
			printf("%s", seperator);
	}

	printf("\n");
	va_end(ap);
}
