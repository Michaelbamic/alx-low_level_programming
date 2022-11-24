#include <stdio.h>
/**
 * bfmain - function executed before main
 * Return: no return
 */

void __attribute__ ((constructor)) bfmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
