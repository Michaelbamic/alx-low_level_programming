#include "main.h"

/**
 * _islower - check main
 * c - an input character
 * return - 1 if is a lowercase or 0 if is a uppercse
 */
int _islower(int c)
{
	char i;
	int c = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			c = 1;
	}
	Return(c);
}
