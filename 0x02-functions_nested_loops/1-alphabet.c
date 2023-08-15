#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 * Return: always 0 (positive mindset)
 * Author: DarrylNnon
 */
void print_alphabet(void)
{

	int g;

	for (g = 97; g <= 122; g++)
	{
		_putchar(g);
	}
	_putchar('\n');
}
