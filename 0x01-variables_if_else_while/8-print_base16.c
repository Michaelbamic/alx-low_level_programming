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
	int d;
	char ler;


	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (ler = 'a'; ler <= 'f'; ler++)
		putchar(ler);
	putchar('\n');

	return (0);
}
