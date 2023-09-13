#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Alx School students.
 * @argc: argument count.
 * @argv: argument vector.
 * Author: Darryl Nnon
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int j, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < nbytes; j++)
	{
		printf("%02x", opc[j] & 0xFF);
		if (j != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
