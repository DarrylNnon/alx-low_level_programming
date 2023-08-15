#include "main.h"

/**
*print_sign-prints sign of a number
*@n: character to be verified
*Return: return 0 or 1
*Author: DarrylNnon
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
