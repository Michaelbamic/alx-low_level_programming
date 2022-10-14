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

	for (d = '0'; d <= '9'; d++)
	{
		for (f = d + 1; f <= '9'; f++)
		{
			if (f != d)
			{
				putchar(d);
				putchar(f);

				if (d == '8' && f == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
