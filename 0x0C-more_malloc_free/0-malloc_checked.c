#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 * Return: return pointer to the allocated memory
 * if malloc fails, status value of 98
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
