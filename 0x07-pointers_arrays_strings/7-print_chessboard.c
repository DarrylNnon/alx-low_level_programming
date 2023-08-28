#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 * Author: Darryl Nnon
 */
void print_chessboard(char (*a)[8])
{
	unsigned int b, m = 0;

	for (b = 0; b < 64; b++)
	{
		if (b % 8 == 0 && b != 0)
		{
			m = b;
			_putchar('\n');
		}
		_putchar(a[b / 8][b - m]);
	}
	_putchar('\n');
}
