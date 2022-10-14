#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: ALways 0 (Success)
*/

int main(void)
{
	int d, f;

	for (d = '0'; d <= '98'; d++)
	{
		for (f = d + 1; f <= '99'; f++)
		{
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
			putchar(' ');
			putchar((f / 10) + '0');
			putchar((f % 10) + '0');

			if (d == '98' && f == '99')
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
