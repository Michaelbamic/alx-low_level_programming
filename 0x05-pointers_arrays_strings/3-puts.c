#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string
 * Return: no return.
 */
void _puts(char *str)
{
	int len = 0;

	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[len]);
		len++;
	}
}
