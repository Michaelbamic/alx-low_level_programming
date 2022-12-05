#include <stdio.h>
/**
 * main - the entry point for the program to get header of ELF file
 * @argc: the number of argument
 * @argv: the pointer to array of arguments
 * Return: 1 0n sucess, error code on failure
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
