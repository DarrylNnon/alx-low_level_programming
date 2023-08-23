#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 * Author: Darryl Nnon
 */
void print_buffer(char *b, int size)
{
	int c, k, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (c = 0; c < size; c += 10)
		{
			printf("%.8x:", c);
			for (k = c; k < c + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", *(b + k));
				else
					printf("  ");
			}
			printf(" ");
			for (l = c; l < c + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}
