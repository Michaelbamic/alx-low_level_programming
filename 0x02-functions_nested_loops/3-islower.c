#include "main.h"

/**
 * _islower - check Main
 * @c - an input character
 * return - 1 if is a lowercase or 0 if is a uppercse
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
