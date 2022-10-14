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
	int d, f, h;

	for (d = '0'; d <= '9'; d++)
	{
		for (f = d + 1; f <= '9'; f++)
		{
			for (h = f + 1; h <= '9'; h++)
			{
				if ((f != d) != h)
				{
					putchar(d);
					putchar(f);
					putchar(h);

					if (d == '7' && f == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
