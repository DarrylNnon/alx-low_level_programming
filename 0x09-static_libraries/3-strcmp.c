#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 * Author: Darryl Nnon
 */

int _strcmp(char *s1, char *s2)
{
	int b = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + b) == '\0') && (*(s2 + b) == '\0'))
			break;
		op = *(s1 + b) - *(s2 + b);
		b++;
	}

	return (op);
}
