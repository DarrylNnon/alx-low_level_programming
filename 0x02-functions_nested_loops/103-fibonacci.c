#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 * Author: Darryl Nnon
 */
int main(void)
{
	long int e1, e2, fn, bfn;

	e1 = 1;
	e2 = 2;
	fn = bfn = 0;
	while (fn <= 4000000)
	{
		fn = e1 + e2;
		e1 = e2;
		e2 = fn;
		if ((e1 % 2) == 0)
		{
			bfn += e1;
		}
	}
	printf("%ld\n", bfn);
	return (0);
}
