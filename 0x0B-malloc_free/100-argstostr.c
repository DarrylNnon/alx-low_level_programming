#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 * Author: Darryl Nnon
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int c, b, j, ba;

	if (ac == 0)
		return (NULL);

	for (c = b = 0; b < ac; b++)
	{
		if (av[b] == NULL)
			return (NULL);

		for (j = 0; av[b][j] != '\0'; j++)
			c++;
		c++;
	}

	aout = malloc((c + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (b = j = ba = 0; ba < c; j++, ba++)
	{
		if (av[b][j] == '\0')
		{
			aout[ba] = '\n';
			b++;
			ba++;
			j = 0;
		}
		if (ba < c - 1)
			aout[ba] = av[b][j];
	}
	aout[ba] = '\0';

	return (aout);
}
