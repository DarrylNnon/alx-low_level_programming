#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 * Author: Darryl Nnon
 */
void print_number(int n)
{
	unsigned int c, d, count;

	if (n < 0)
	{
		_putchar(45);
		c = n * -1;
	}
	else
	{
		c = n;
	}

	d = c;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((c / count) % 10) + 48);
	}
}
