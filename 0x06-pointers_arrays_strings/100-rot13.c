#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 * Author: Darryl  Nnon
 */

char *rot13(char *s)
{
	int count = 0, b;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (b = 0; b < 52; b++)
		{
			if (*(s + count) == alphabet[b])
			{
				*(s + count) = rot13[b];
				break;
			}
		}
		count++;
	}

	return (s);
}
