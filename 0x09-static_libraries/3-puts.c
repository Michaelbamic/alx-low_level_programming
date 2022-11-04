#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string
 * Return: no return.
 */
void _puts(char *s)
{
	int len = 0;

	while (len >= 0)
	{
		if (s[len] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[len]);
		len++;
	}
}
