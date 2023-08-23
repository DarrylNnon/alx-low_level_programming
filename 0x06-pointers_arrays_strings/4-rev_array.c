#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 * Author: Darryl Nnon
 */

void reverse_array(int *a, int n)
{
	int f, b, temp;

	for (f = 0; f < n - 1; f++)
	{
		for (b = f + 1; b > 0; b--)
		{
			temp = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = temp;
		}
	}
}
