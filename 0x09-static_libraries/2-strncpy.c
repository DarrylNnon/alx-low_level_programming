#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 * Author: Darryl  Nnon
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[b] = src[b];
	for ( ; b < n; b++)
		dest[b] = '\0';

	return (dest);
}
