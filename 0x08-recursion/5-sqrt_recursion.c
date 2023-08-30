#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @n: input number.
 * @c: iterator.
 * Return: square root or -1.
 * Author: Darryl Nnon
 */
int power_operation(int n, int b)
{
	if (b % (n / b) == 0)
	{
		if (b * (n / b) == n)
			return (b);
		else
			return (-1);
	}
	return (0 + power_operation(n, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
