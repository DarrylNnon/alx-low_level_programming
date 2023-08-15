#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 * Author: DarrylNnon
 */
int main(void)
{
	int a, boolean, boolean2;
	long int e1, e2, fn, fn2, e11, e22;

	e1 = 1;
	e2 = 2;
	boolean =  boolean2 = 1;
	printf("%ld, %ld", e1, e2);
	for (a = 0; a < 96; a++)
	{
		if (boolean)
		{
			fn = e1 + e2;
			printf(", %ld", fn);
			e1 = e2;
			e2 = fn;
		}
		else
		{
			if (boolean2)
			{
				e11 = e1 % 1000000000;
				e22 = e2 % 1000000000;
				e1 = e1 / 1000000000;
				e2 = e2 / 1000000000;
				boolean2 = 0;
			}
			fn2 = (e11 + e22);
			fn = e1 + e2 + (fn2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fn2 % 1000000000);
			e1 = e2;
			e11 = e22;
			e2 = fn;
			e22 = (fn2 % 1000000000);
		}
		if (((e1 + e2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
