#include <stdio.h>

/**
 * main - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 *
 * Return: Always 0.
 * Author: DarrylNnon
 */
int main(void)
{
	int e, f;

	for (e = 1; e < 1024; e++)
	{
		if ((e % 3) == 0 || (e % 5) == 0)
			f += e;
	}
	printf("%d\n", f);
	return (0);
}
