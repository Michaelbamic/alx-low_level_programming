#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX Students
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	unsigned char *opc;
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbytes = atoi(argv[i]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opc = (unsigned char *)main;
	i = 0;
	if (nbytes > 0)
	{
		while (i < (nbytes - 1))
			printf("%02hhx ", opc[i++]);
		printf("%hhx\n", opc[i]);
	}
	return (0);
}
