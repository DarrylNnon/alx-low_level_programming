#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 * Author: DarrylNnon
 */
void print_times_table(int n)
{
	int e, f, xy;

	if (n >= 0 && n <= 15)
	{
		for (e = 0; e <= n; e++)
		{
			_putchar(48);
			for (f = 1; f <= n; f++)
			{
				xy = e * f;
				_putchar(44);
				_putchar(32);
				if (xy <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(xy + 48);
				}
				else if (xy <= 99)
				{
					_putchar(32);
					_putchar((xy / 10) + 48);
					_putchar((xy % 10) + 48);
				}
				else
				{
					_putchar(((xy / 100) % 10) + 48);
					_putchar(((xy / 10) % 10) + 48);
					_putchar((xy % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
