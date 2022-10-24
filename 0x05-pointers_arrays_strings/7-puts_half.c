#include "main.h"

/**
 * puts_half - print half of a string.
 * @str: input string
 * Return: no return.
 */
void puts_half(char *str)
{
	int len = 0, 1;

	while (len >= 0)
	{
		if (str[len] == '\0')
			break;
		len++;
	}
	if (len % 2 == 1)
		i = len / 2;
	else
		i = (len - 1) / 2;

	for (i++; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
