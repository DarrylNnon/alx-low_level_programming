#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int e, f, g, h;

	for (e = 48; e <= 50; e++)
	{
		for (f = 48; f <= 57; f++)
		{
			for (g = 48; g <= 53; g++)
			{
				for (h = 48; h <= 57; h++)
				{
					if (e >= 50 && f >= 52)
						break;
					_putchar(e);
					_putchar(f);
					_putchar(58);
					_putchar(g);
					_putchar(h);
					_putchar('\n');
				}
			}
		}
	}
}
