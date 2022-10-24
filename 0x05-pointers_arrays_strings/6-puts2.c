#include "main.h"

/**
 * puts2 - print one char out of 2 of a string.
 * @str: input string
 * Return: no return.
 */
void puts2(char *str)
{
	int len = 0;

	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
}
