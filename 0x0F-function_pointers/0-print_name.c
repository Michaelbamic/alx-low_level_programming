#include "funtion_pointers.h"

/**
 * print_name - prints a name
 * @name: input name
 * @f: functoin pointer
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
