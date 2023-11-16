#include "main.h"

/**
 * _abs - Computes the absolute value
 * of an integer.
 *
 * @m: input number as an integer.
 *
 * Return: absolute value
 */
int _abs(int m)
{
	if (m >= 0)
	{
		return (m);
	}
	else
	{
		return (m * -1);
	}
}
